#include<iostream>
using namespace std;
int main(){
    float f=0,c=0;
    int ch;
    cout<<"Temperature Converter"<<endl<<"Enter 1 for Fahrenheit to celsius"<<endl<<"Enter 2 for celsius to fahrenheit"<<endl<<"Enter your choice : ";
    cin>>ch;
    switch (ch)
    {
    case 1:
        cout<<"Enter temperature in fahrenheit : ";
        cin>>f;
        c=(f-32)*5/9;
        cout<<"Temperature in celsius = "<<c;
        break;
    case 2:
        cout<<"Enter temperature in celsius : ";
        cin>>c;
        f=(c*9/5)+32;
        cout<<"Temperature in fahrenheit = "<<f;
        break;
    default:
        cout<<"Invalid Input";
        break;
    }
}
