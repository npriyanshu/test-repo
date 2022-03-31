#include<iostream>
using namespace std;
int main ()
{
    int number, reminder;
    cout<<"enter a number :";
    cin>>number;
    while(number>0)
    {
        reminder=number%10;
        cout<<reminder;
        number=number/10;
    }
    return 0;
}