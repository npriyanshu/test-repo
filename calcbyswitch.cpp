#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    int ch;
    cout<<"enter the first number :\t";
    cin>>a;
    cout<<"enter the second number :\t";
    cin>>b;
    cout<<"enter your choice :";
    cin>>ch;
    switch(ch)
    {
        case 1: cout<<a+b;
        break;
        case 2: cout<<a-b;
        break;
        case 3: cout<<a*b;
        break;
        case 4: cout<<a/b;
        break;
        default : cout<<"wrong choice bro !";
    }
return 0;
}