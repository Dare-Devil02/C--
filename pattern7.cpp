#include<iostream>
using namespace std;
int main(){
    int i=0,n, j;
    cout<<"Enter value of n : ";
    cin>>n;
    i=n;
    while(n>0)
    {
        j=n;
        while(j<=i){
            cout<<(char)(j+64)<<" ";
            j++;
        }
        n--;
        cout<<endl;
    }
}