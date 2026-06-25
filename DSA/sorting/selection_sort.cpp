#include<bits/stdc++.h>
using namespace std;
int main(){

    int num;
    cin>>num;
    vector<int> arr(num);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }

    for(int i=0;i<num-1;i++){
        int min_index=i;
        for(int j=i+1;j<num;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[i], arr[min_index]);
    }

    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
}