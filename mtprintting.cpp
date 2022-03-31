#include <iostream>
using namespace std;
int main ()
{
   int a[10][10],b[10][10],r,c,i,j;
   int mul[10][10],k;
   cout<<"enter the no of rows :";
   cin>>r;
   cout<<"enter the no of column :";
   cin>>c;
   cout<<"enter the elements of the first matrix :\n";
   for (i=0;i<r;i++)
   {
       for (j=0;j<c;j++)
       {
           cin>>a[i][j];
       }
   }
      cout<<"enter the elements of the second matrix :\n";
   for (i=0;i<r;i++)
   {
       for (j=0;j<c;j++)
       {
           cin>>b[i][j];
       }
   }
   cout<<"multiplying the elements of matrix :\n";
    for (i=0;i<r;i++)
   {
       for (j=0;j<c;j++)
       {
        mul[i][j]=0;
        for (k=0;k<c;k++)
        // code for the multiplicaltion 
        // k ka istemal kiya column ke barabar value rakha kr i and j se multiply kera kr matrix multiplication kiya
        {
            mul[i][j]= a[i][k]*b[k][j];
        }
       }
   }
   // now i am printing the elements of the matrix
      for (i=0;i<r;i++)
   {
       for (j=0;j<c;j++)
       { cout<<mul[i][j]<<" "<<"\t"<<"\n";
       }
   }
return 0;  
}    