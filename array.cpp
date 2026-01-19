#include<iostream>
using namespace std;

void printarray(int arr[],int size){
    cout<<"Printing the array"<<endl;
    for(int i=0;i<size;i++)
    cout<<arr[i]<<", ";
    cout<<"Printing done"<<endl;
}

int main(){
    int number[15];
    cout<<"Value at 0th index"<<number[14]<<endl;
    int second[3]={3,7,11};
    cout<<"Value at 2nd index"<<second[2]<<endl;
    int n=15;
    int third[15]={2,7};
    printarray(third,n);
    int fourth[10]={0};
    n=10;
    printarray(fourth,n);

    //size of array
    int fifth[10]={1};
    int fifthsize=sizeof(fifth)/sizeof(int);
    cout<<fifthsize<<endl;


    //char array
    char ch[5]={'a','b','c','d','e'};
    for(int i=0;i<5;i++)
    cout<<ch[i]<<", ";
}