#include <bits/stdc++.h>
using namespace std;

int countSubarrWithEqualZeroAndOne(int arr[], int n)
{

    int curr_sum = 0;
    int count = 0;
    
    for(int i=0;i<n;i++){
        curr_sum=0;
        for(int j=i;j<n;j++){
            curr_sum+=arr[j];
            int len = j-i+1;
            if((len)%2 == 0 && (len)/2 ==curr_sum){
                count++;
            }
        }
        
        
    }


    return count;
}
 
int main()
{
    int arr[] = { 1, 0, 0, 1, 0, 1, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Count = "
         << countSubarrWithEqualZeroAndOne(arr, n);
    return 0;
}