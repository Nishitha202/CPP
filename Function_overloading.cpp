#include <iostream>
using namespace std;
//Function overloading with different type of parameter
int area(int l,int b)
{
    return l*b;
}
int area(int l)
{
    return l*l;
}
int main() {


cout<<area(5)<<endl;
cout<<area(5,4); 
return 0;
}