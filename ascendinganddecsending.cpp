#include<iostream>
using namespace std;
int main()
{
    int a[5],i,c,j,ch;
    cout<<"enter the elements"<<endl;
    for (i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout <<"enter choice\n"<<"1\n2\n";
    cin>>ch;
    switch (ch)
    {
    case 1:
    for(i=0;i<5;i++)
    {    for(j=i+1;j<5;j++)
    {
            if (a[i]>a[j])
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
    }
        }
       cout<<"the elements in ascending order"<<endl;
        for (i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
        break;
    case 2:
     for(i=0;i<5;i++)
    {  for(j=i+1;j<5;j++)
    {  
            if (a[i]<a[j])
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
    }
        }
       cout<<"the elements in descending order"<<endl;
        for (i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    break;
    default:
    cout<<"wrong choice !";
        break;
    }

    return 0;
}
