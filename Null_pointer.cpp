
#include <iostream>
using namespace std;
int main() {

int x=10;
int *xptr=&x;

//we don't want a pointer varable to point to any random address 
xptr=0;
cout<<xptr<<endl;

int *p=NULL; // pointer variable p is  not pointing to any address
cout<<p<<endl;

if(xptr==NULL)
cout<<"Yes it  is a  Null pointer";


    return 0;
}
