#include<iostream>
using namespace std;
int main(){
    int i=0,n,j=0,k=0;
    cout<<"Enter value of n : ";
    cin>>n;
    k=n;
    while(i<n){
        j=0;
        k=n-i;
        while(j<=i){
            while(k>=0){
            cout<<" ";
            k--;
        }
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    }
}