
#include <iostream>
#include <vector>
using namespace std;

vector<int> commonElement(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3){
    int i=0,j=0,k=0;
    vector<int> ans;
    while(i<n1 && j<n2 && k<n3){
        if(arr1[i] == arr2[j] && arr1[i] ==arr3[k]){
            ans.push_back(arr1[i]);
            i++;j++;k++;
        }
        else if(arr1[i] <= arr2[j] && arr1[i] <= arr3[k]){
            i++;
        }
        else if(arr2[j] <= arr1[i] && arr2[j] <= arr3[k]){
            j++;
        }
        else{
            k++;
        }
    }
    return ans;
}

int main()
{
    int arr1[] = {11,23,45,52,66,78,79};
    int arr2[] = {11,25,45,52,66,68,72,78,80};
    int arr3[] = {9,11,22,23,40,52,78,85};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    
    cout<<"arr1 : ";
    for(int i=0;i<n1;i++) cout<<arr1[i]<<" ";
    cout<<endl;
    
    cout<<"arr2: ";
    for(int i=0;i<n2;i++) cout<<arr2[i]<<" ";
    cout<<endl;
    
    cout<<"arr3: ";
    for(int i=0;i<n3;i++) cout<<arr3[i]<<" ";
    cout<<endl<<endl;
    
    vector<int> ans = commonElement(arr1,arr2,arr3,n1,n2,n3);
    cout<<"common elements: ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    

    return 0;
}
