#include<iostream>
using namespace std;
int main()
{
    int sum=0, n;
    cout<<"Enter a number upto where you want the sum of even numbers : ";
    cin>>n;
    for (int i=0;i<=n;i+=2){
    sum+=i;}
    cout<<"The sum of numbers upto "<<n<<" is "<<sum;
    
}