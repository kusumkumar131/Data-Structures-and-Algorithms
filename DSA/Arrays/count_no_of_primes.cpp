#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
  
    int count=0;
    bool isPrime[n+1];  
    for(int i=0;i<=n;i++){
        isPrime[i]=true;
    }
    //write code
    for(int i=2;i*i<=n;i++){
        if(isPrime[i]){
            for(int j=i*i;j<=n;j+=i){
                isPrime[j]=false;
            }
        }
    }


    return 0;
}