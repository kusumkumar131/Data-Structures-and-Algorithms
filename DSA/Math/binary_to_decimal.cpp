#include<iostream>
using namespace std;
int main(){
    int decimal;
    cin>>decimal;
    int binary[32];
    int i=0;
    while(decimal>0){
        binary[i]=decimal%2;
        decimal=decimal/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        cout<<binary[j];
    }
    return 0;
}