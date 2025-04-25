
#include <iostream>
using namespace std;
int main() {
 
  
int x=10;
cout<<&x<<endl;

//pointer
 int  *  xptr =&x;
 cout<<xptr<<endl;
 
cout<<&xptr<<endl;
//pointer to pointer
 int ** xxptr = &xptr;
 cout<<xxptr<<endl;
 
 
 float y=90.8;
 cout<<&y<<endl;
 
 
  float  * yptr=&y;
  cout<<yptr;
 
 
 
    return 0;
}