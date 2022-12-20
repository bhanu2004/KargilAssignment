#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {100, 300, 500};
    int dep[] = {900, 400, 600};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<pair<int,int>> trav;
    for(int i=0;i<n;i++){
        trav.push_back({arr[i],dep[i]});
    }
    sort(trav.begin(), trav.end());
    vector<int> count;
    for(int i=0;i<trav.size();i++){
        if(count.empty()){
            count.push_back(trav[i].second);
        }
        else{
            bool temp = true;
            for(int j=0;j<count.size();j++){
                if(trav[i].first > count[j]){
                    count[j] = trav[i].second;
                    
                    temp = false;
                    break;
                }
            }
            if(temp){
                count.push_back(trav[i].second);
            }
        }
    }
    cout<<"minimum number of runways: ";
    cout<<count.size()<<endl;

    return 0;
}
