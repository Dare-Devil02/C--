#include<iostream>
using namespace std;
int power(int a , int b){
    int ans=1;
    for(int i=1;i<=b;i++)
    ans*=a;
    return ans;
}
int main(){
int a,b;
cout<<"Enter the number :";
cin>>a;
cout<<"Enter the exponent :";
cin>>b;
cout<<"Power of "<<a<<" raised to "<<b<<" is "<<power(a,b);
return 0;
}