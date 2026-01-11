#include<iostream>
using namespace std;
int main(){
    int i,n,j,k,x;
    //Taking input from user
    cout<<"Enter value of n : ";
    cin>>n;
    k=n;
    while(n>0){
        //First triangle
        i=1;
        while(i<=n){
            cout<<i<<" ";
            i++;
        }
        //star pattern
        x=k-n;
            while(x>0){
                cout<<"* * ";
                x--;
            }
        //Second Triangle
        j=n;
        while(j>0){
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        n--;      
    }
}