#include<iostream>
using namespace std;
int fact(int n){
    int result=1;
    for(int i=2;i<=n;i++){
        result*=i;
    }
    return result;
}
int main(){
    int n,r;
    cout<<"NcR Program"<<endl<<"Enter the value of n :";
    cin>>n;
    cout<<"Enter the value of r :";
    cin>>r;
    double result=fact(n)/(fact(n-r)*fact(r));
    cout<<n<<"C"<<r<<"="<<result;
}