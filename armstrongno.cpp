#include<iostream>
using namespace std;
int main ()
{
    int n,rem,c,arm=0;
    cout<<"enter any no :";
    cin>>n;
    c=n;
    while(n>0)
    {
        rem=n%10;
        arm=(rem*rem*rem)+arm;
        n=n/10;
    }
    if(c==arm)
    cout<<"it is an armstrong number";
    else
    cout<<"its not an armstrong number ";
    return 0;

}