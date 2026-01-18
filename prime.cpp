#include<iostream>
using namespace std;
int isprime(int n){
for(int i=2;i<n;i++){
    if(n%i);
    return 0;
}    
return 1;
}
int main(){
int n;
cout<<"Enter a number to check prime :";
cin>>n;
cout<<(isprime(n)?"Not Prime": "Prime");
}