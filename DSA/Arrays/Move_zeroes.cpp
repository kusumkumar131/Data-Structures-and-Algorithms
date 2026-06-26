#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0,j=0;
    while(i<n){ 
        
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}