
#include <iostream>
#include<vector>
using namespace std;
//Function overloading with different type of parameter

void print( int a)
{
  cout<<a<<endl;
}

void print(vector<int>  a)
{
for (int x:a){
    cout<<x<<","<<endl;
}
}

void print(char *arr){
    cout<<arr<<endl;
}

int main() {
int a=5;
vector <int> arr={1,2,3,4,5};
char carr[]="abcd";

print(a);
print(arr);
print(carr);

return 0;
}