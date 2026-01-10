#include<iostream>
using namespace std;
int main(){
int n,i=2,rem=0;
cout<<"Enter a number to check prime"<<endl;
cin>>n;
while(i<n){
    rem=n%i;
    i++;
}
if(rem!=0)
cout<<"Prime";
else
cout<<"Not Prime";
}