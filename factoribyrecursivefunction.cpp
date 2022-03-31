#include<iostream>
using namespace std;
long int factorialofno(int n){
    if (n>=1)
    return n*factorialofno(n-1);
    else 
    return 1;
}
int main ()
{
    int n;
    cout<<"enter a positive integer :";
    cin>>n;
    cout<<"the factorial of n no is :"<<factorialofno(n);
    return 0;
}