#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int arr[10]={1,2,3,4};
    
//   cout << arr<<endl;
//   cout<<arr+1<<endl;
   
//   int *ptr=arr;
//   cout<<ptr<<endl;
//   ptr=ptr+1;
//   cout<<ptr<<endl;
//   cout<<*ptr<<endl;
   
//pointer to an array of 10 elements
int (*ptr)[10];
//array of 10 pointers or array of pointers of size 10 
//   int *ptr[10];
ptr=&arr;
cout<<"Ptr value    :"<<ptr<<endl;
cout<<"ptr plus one value   :"<<ptr+1<<endl;
   

    return 0;
}