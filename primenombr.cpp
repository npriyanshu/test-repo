#include<iostream>
using namespace std;
int main ()
{
    int n,i,counter=0;
    cout<<"enter any no :";
    cin>>n;
for(i=1;i<=n;i++)
{
    if (n%i==0)
    {
        counter++;
    }

}
     if (counter==2)
     
         cout <<"prime number";
     
     else
     cout<<"not";
 
 return 0;

}
