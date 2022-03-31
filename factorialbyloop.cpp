#include<iostream>
using namespace std;
int main()
{
    int i,n,fact=1;
    cout<<"enter the no you want factorial of :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=i*fact;
    }
    cout<<fact;
    return 0;
}