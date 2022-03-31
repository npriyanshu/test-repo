#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=1,c=2,d;
    cout <<"enter the no of terms :";
    cin>>n;
    for(int i =1;i<=n;i++)
    {
        cout<<a<<endl;
        d=a+b+c;
        a=b; 
        b=c; 
        c=d;    
    }
    return 0;
}