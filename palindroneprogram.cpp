#include<iostream>
using namespace std;
int main ()
{
    int n,rem,c,s=0;
    cout<<"enter any number :";
    cin>>n;
    c=n;
    while(n>0)
     {
         rem=n%10;
         s=rem+(s*10);
         n=n/10;
     }
     if (c==s)
     cout<<s<<" is a palindrone";
     else
     cout<<"its not a palindrone";
     return 0;

}