#include <iostream>
using namespace std;

int main() {
int x=10;
 
 int &y=x;     // Reference variables must be intialized  
x++;
 cout<<x<<endl;
 y++;
 cout<<y<<endl;//Reference variable
}
