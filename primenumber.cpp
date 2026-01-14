#include<iostream>
using namespace std;
int main(){
    int n,c=0;
    cout<<"Enter upper limit upto where you need prime number from 1 :";
    cin>>n;
    for(int i=2;i<=n;i++){
        c=0;
        for(int j=2;j<i;j++){
            if(i%j==0)
            c++;
            if(c>0)
            break;
        }
        if(c==0)
        cout<<i<<",";
    }
}