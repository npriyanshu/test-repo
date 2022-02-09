#include <iostream>
using namespace  std; 
void DisplayArray(int arr[],int size,int i)
{
      cout<<" the elements of the array are :"<<endl;
  for (i=0;i<size;i++)
  {
      cout<<arr[i]<<"\t";
  }
}
void InsetionArray(int arr[],int size,int i,int pos,int element)
{
    for(i=size;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=element;
}
 int main()
 {
   int arr[100],size,i,pos,element;

   cout<<"enter the size of the array :";
   cin>>size;
  
  cout<<"enter the elements of the array :"<<endl;
  for (i=0;i<size;i++)
  {
      cin>>arr[i];
  }
  cout<<"enter the position of the array where you want to inset element :";
  cin>>pos;
  cout<<"enter the element you want to inset :";
  cin>>element;
  InsetionArray(arr,size,i,pos,element);
  size++;
  DisplayArray(arr,size,i);
return 0;
 }
