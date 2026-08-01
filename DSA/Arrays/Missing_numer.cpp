#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=(n*(n+1))/2;
    for(int i=0;i<n;i++){
        sum-=arr[i];
    }
    cout<<sum;
}