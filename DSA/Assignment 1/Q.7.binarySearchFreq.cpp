#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int i=0;
    int j = n-1;
    while(i<=j){
        int mid = (i+j)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid]>target) j = mid-1;
        else i = mid+1;
    }
    return -1;
}

int countFrequency(int arr[], int n, int target){
    int pos = binarySearch(arr,n,target);
    int count = 1;
    int left = pos-1;
    while(left>=0 && arr[left]==target){
        count++;
        left--;
    }
    int right = pos+1;
    while(right<n && arr[right] == target){
        count++;
        right++;
    }
    return count;
}
 
int main()
{
    int arr[] = { 1,2,2,2,4,4,4,4,4,5,6,6};
    int target = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Count of "<<target<<" in arr : "<< countFrequency(arr, n,target);
    return 0;
}