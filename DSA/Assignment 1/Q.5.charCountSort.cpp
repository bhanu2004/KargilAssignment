#include <bits/stdc++.h>
using namespace std;

void countSort(char arr[],int n)
{
    char output[n];
    int count[256] = {0};
    
    
    for (int i = 0; i<n; i++)
        count[arr[i]]++;
 
    for (int i = 1; i < 256; ++i)
        count[i] += count[i - 1];

    for (int i = 0; arr[i]; ++i) {
        output[count[arr[i]] - 1] = arr[i];
        --count[arr[i]];
    }

    for (int i = 0; arr[i]; ++i)
        arr[i] = output[i];
}

int main()
{
    char arr[] = "countsortexample";
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Original array: "<<arr<<endl;
    countSort(arr,n);
    cout << "Sorted array: " << arr;
    return 0;
}