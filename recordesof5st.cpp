#include<iostream>
using namespace std;
struct stu
{
 int roll;
 float marks;
 char name;
 char subjects;
 int age;
};
int main ()
{
struct stu a;
cout<<"enter your name :"<<endl;
cin>>a.name;
cout<<"enter your age :"<<endl;
cin>>a.age;
cout<<"enter your subjects :"<<endl;
cin>>a.subjects;
cout<<"enter your marks :"<<endl;
cin>>a.marks;
cout<<"enter your roll no :"<<endl;
cin>>a.roll;
cout<<a.name<<a.age<<a.subjects<<a.marks<<a.roll;
return 0;
}