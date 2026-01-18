#include<iostream>
using namespace std;
void printcount(int n){
    int i=1;
    for(i=1;i<=n;i++)
    cout<<i<<endl;
}
int main(){
int n;
cout<<"Print Number program "<<endl<<"Enter the upper bound :";
cin>>n;
printcount(n);
}