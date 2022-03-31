#include<iostream>
using namespace std;
union stu
{
 int roll;
 float marks;
 char name;
 char subjects;
 int age;
};
int main ()
{
union stu a,b,c,d,e;
cout<<"enter your name :"<<endl;
cin>>a.name;

cout<<"enter your age :"<<endl;
cin>>b.age;
cout<<"enter your subjects :"<<endl;
cin>>c.subjects;
cout<<"enter your marks :"<<endl;
cin>>d.marks;
cout<<"enter your roll no :"<<endl;
cin>>e.roll;
cout<<a.name<<b.age<<c.subjects<<d.marks<<e.roll;
return 0;
}