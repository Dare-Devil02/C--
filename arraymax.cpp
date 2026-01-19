#include<iostream>
#include<climits>
using namespace std;

int getmax(int num[], int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;

}

int main(){
    int size;
    cout<<"Enter the size of an array :";
    cin>>size;
    int num[100];
    cout<<"Enter the elements in the array "<<endl;
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"Maximum Element is "<<getmax(num,size)<<endl;

}