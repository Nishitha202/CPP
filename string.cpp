#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char arr[100]="Hello";
  
  strcpy(arr,"hello everyone");
 cout<<arr<<endl;

cout<<"Length of arr :"<<strlen(arr)<<endl;
cout<<"size of arr :"<<sizeof(arr)<<endl;
  
return 0;
}
