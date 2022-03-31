#include<iostream>
using namespace std;
int main()
{
    int a[100],n,i,j,c;
    cout<<"enter the size of array";
    cin>>a[n];
    cout<<"enter the elements"<<endl;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j=n;j++)
        {
            if (a[i]>a[j])
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
       cout<<"the elements in ascending order"<<endl;
        for (i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}