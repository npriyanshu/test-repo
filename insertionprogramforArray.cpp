#include <iostream>
using namespace std;
int main {
    int arr[100],pos,size,element;
    int i;
    cout<<"enter the size of array";
     cin>>size;
    cout<<"enter the elements of the array";
    for (i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the element that you want to insert in the array";
    cin<<element;
    cout<<"enter the position where you want to inset the element";
    cin>>pos;
    for (i=size;i=>pos;i--)
    {
        arr[i]=arr[i-1];
    }
        arr[pos]=element;
        size++;
    cout<<"the elements of the array";
    for(i=0;i=size;i++)
    {
    cout<<arr[i];
    }
    return 0;
}