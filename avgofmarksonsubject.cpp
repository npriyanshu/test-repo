#include<iostream>
using namespace std;
int main ()
{
    int marks[5],avg,n,sum=0;
    cout<<"enter the marks of sub no of subjects :";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"enter the marks of subject no "<<i<<" :";
        cin>>marks[i];
        sum=sum+marks[i];
    }
   avg=sum/n;
     cout<<avg;
    
}
