
#include <iostream>
using namespace std;
int main() {
 
  
int x=10;
cout<<&x<<endl;

//pointer
 int  *  xptr =&x;
 cout<<xptr<<endl;
cout<<&xptr<<endl;

//dereference operator
cout<<*xptr<<endl;
cout<<*(&x);


    return 0;
}