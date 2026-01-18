#include<iostream>
using namespace std;
bool isEven(int a){
    return((a&1)==0);
}
int main(){
    int a;
    cout<<"Enter the number to check odd or even :";
    cin>>a;
    cout<<(isEven(a)?"Even":"Odd");
}