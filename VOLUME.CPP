#include<iostream.h>
#include<conio.h>
#include<string.h>
class Box
{
public:
double len1,b1,h1;
double len2,b2,h2;
};
void main()
{
Box box1,box2;
double v1,v2;
clrscr();
box1.len1=5.0;
box1.b1=3.2;
box1.h1=2.0;
box2.len2=3.2;
box2.b2=4.0;
box2.h2=2.0;
v1=box1.len1*box1.b1*box1.h1;
v2=box2.len2*box2.b2*box2.h2;
cout<<"volume of first box is"<<v1<<endl;
cout<<"volume of second box is"<<v2<<endl;
getch();
}