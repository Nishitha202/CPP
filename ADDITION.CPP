#include<iostream.h>
#include<conio.h>
class Add
{
public:
int x,y,z;

void sum()
{
cout<<"enter the value of x "<<endl;
cin>>x;
cout<<"enter the value of y"<<endl;
cin>>y;
}
void display()
{
z=x+y;
cout<<"addition of two integers is"<<z;
}
};
void main()
{
Add a;
clrscr();
a.sum();
a.display();
getch();
}