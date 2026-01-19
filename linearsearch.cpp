#include<iostream>
using namespace std;
 int linearsearch(int arr[], int key,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==key)
        return i;
    }
    return -1;
}

int main(){
    int arr[10];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<10;i++){
        cout<<"Enter the "<<i+1<<"th element :";
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element to be searched :";
    cin>>key;
    int size=sizeof(arr)/sizeof(int);
    int ret=linearsearch(arr,key,size);
    if(ret!=-1)
    cout<<"Element found at "<<ret<<"th index";
    else
    cout<<"Element not found";
}