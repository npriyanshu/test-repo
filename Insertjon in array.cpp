#include <iostream>
using namespace std;
int main()
{   int arr[100] ,i,size,element,pos;
    cout<<"enter the no of the elements you want in array";
    cin>>size;
      cout<<"enter the elements you want in array";
    for (i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the position where you want to insert the element :";
    cin>>pos;
    cout<<"enter the element you want to inset at position :";
    cin>>element;
    for (i=size;i>=pos;i--)
    {
       arr[i]=arr[i-1];
    }
       arr[pos-1]= element;
       size++;
    for (i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
   return 0;
}