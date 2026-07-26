#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    bool prime[n+1];
    for(int i=0;i<=n;i++){
        prime[i]=true;
    }
    prime[0]=false;
    prime[1]=false;

    for(int i=2;i*i<=n;i++){
        if(prime[i]==true){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }
//space complexity: O(n)
//output the prime numbers
    cout<<"Prime numbers up to "<<n<<": ";
    for(int i=2;i<=n;i++){
        if(prime[i]==true){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}
//time complexity: O(nlog(logn))
//in normal way takes O(n*sqrt(n)) time complexity