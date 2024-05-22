#include<iostream.h> //hi
#include<conio.h>
class add{
public:
int sum(int num1,int num2)
{
return num1+num2;
}
int sum(int num1,int num2,int num3)
{
return num1+num2+num3;
}
};
void main()
{
add a;
clrscr();
cout<<"sum is"<<a.sum(10,20)<<endl;
cout<<"sum is"<<a.sum(10,20,30)<<endl;
getch();
}