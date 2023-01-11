
#include <bits/stdc++.h>
using namespace std;

int MaximumArea(int arr[], int n)
{
	stack<int> st;
	st.push(-1);
	int area = arr[0];
	int i = 0;
	
	vector<int> left_smaller(n, -1), right_smaller(n, n);
	
	while (i < n) {
		while (!st.empty() && st.top() != -1 && arr[st.top()] > arr[i]) {
			right_smaller[st.top()] = i;
			st.pop();
		}
		if (i > 0 && arr[i] == arr[i - 1]) {
		
			left_smaller[i] = left_smaller[i - 1];
		}
		else {
			left_smaller[i] = st.top();
		}
		
		st.push(i);
		i++;
	}
	for (int j = 0; j < n; j++) {
		area = max(area, arr[j] * (right_smaller[j] - left_smaller[j] - 1));
	}
	return area;
}


int main()
{
	int hist[] = { 6, 2, 5, 4, 5, 1, 6 };
	int n = sizeof(hist) / sizeof(hist[0]);


	cout << "maxArea = " << MaximumArea(hist, n) << endl;
	return 0;
}