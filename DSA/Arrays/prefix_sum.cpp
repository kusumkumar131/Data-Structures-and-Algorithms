#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int prefix_sum[n];
    prefix_sum[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix_sum[i]=prefix_sum[i-1]+arr[i];
    }// The prefix sum array is now computed. Now we can print it.
    cout<<"The prefix sum array is: ";
    for(int i=0;i<n;i++){
        cout<<prefix_sum[i]<<" ";
    }
    return 0;
}
//time complexity of this code is O(n) and space complexity is O(n)
//space complexity can be reduced to O(1) by using the input array itself to store the prefix sum.