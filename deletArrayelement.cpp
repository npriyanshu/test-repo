#include<iostream>
using namespace std;
int main()
{
    int arr[10], size, i, elem, j, found=0;
    cout<<"Enter the size Array Elements: ";
    cin>>size;
    cout<<"the Array Elements: ";
    for(i=0; i<size; i++)
       { 
           cin>>arr[i];
       }
           cout<<"\nEnter Element to Delete: ";
    cin>>elem;
    for(i=0; i<size; i++)
    {
        if(arr[i]==elem)
        {
            for(j=i; j<(size-1); j++)
                arr[j] = arr[j+1];
            found++;
            i--;
            size--; 
        }
    }
    if(found==0)
        cout<<"\nElement doesn't found in the Array!";
    else

    cout<<"the Array Elements: ";
    for(i=0; i<size; i++)
       { 
           cout<<arr[i]<<endl;
       }
    cout<<endl;
    return 0;
}