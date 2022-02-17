#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void DisplayArray(int arr[],int size)
{ 
    int i;
      cout<<" the elements of the array are :"<<endl;
  for (i=0;i<size;i++)
  {
      cout<<arr[i]<<"\t";
  }
}
// This function removes an element x from arr[] and
// returns new size after removal (size is reduced only
// when x is present in arr[]
int deleteElement(int arr[], int size, int pos)
{
// Search x in array
int i;
for (i=0; i<size; i++)
    if (arr[i] == pos)
        break;
 
// If x found in array
if (i < size)
{
    // reduce size of array and move all
    // elements on space ahead
    size = size - 1;
    for (int j=i; j<size; j++)
        arr[j] = arr[j+1];
}
return size;
}
int main()
 {
   int arr[100],size,i,pos;

   cout<<"enter the size of the array :";
   cin>>size;
  
  cout<<"enter the elements of the array :"<<endl;
  for (i=0;i<size;i++)
  {
      cin>>arr[i];
  }
  cout<<"enter the position in where you want to delete the element :";
  cin>>pos;
  deleteElement(arr,size,pos);
  DisplayArray(arr,size);
  return 0;
 }
