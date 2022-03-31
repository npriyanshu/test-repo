#include<iostream>
using namespace std;
int main()
{
    int *p,*q,a,b,sum;
    cout<<"enter the first and second no :";
    cin>>a>>b; 
    p=&a;
    q=&b; 
    sum=*p+*q;
    cout<<sum;
}