#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];  //array of size n
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=(n*(n+1))/2; //sum of first n natural numbers
    for(int i=0;i<n;i++){
        sum-=arr[i];
    }
    cout<<sum;

    //time complexity: O(n)
    //space complexity: O(1)
}