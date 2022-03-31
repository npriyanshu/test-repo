#include<iostream>
using namespace std;
int main ()
{
    int n,reminder,sum=0;
    cout<<"enter any digit greater than 9 :";
    cin>>n;
    while(n>0)
    {  
        reminder = n%10;
        sum = sum+reminder;
        n=n/10;
    }
    cout<<sum;
    return 0;

}