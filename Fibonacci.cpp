#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    a=0,b=1,c=0;
    int n;
    cout<<"Enter the number of iterations :";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i<n)
        cout<<c<<", ";
        else
        cout<<c;
        c=a+b;
        a=b;
        b=c;
    }
}