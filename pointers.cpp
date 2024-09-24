#include <iostream>
using namespace std;

int main() {
int arr[10]={1,2,3,4};
cout<<arr<<endl;  //arr is a read only 

int *ptr=arr;
cout<<"Earlier ptr   :"<<ptr<<endl;

int x=100;
ptr=&x;  //we can read/write or update ptr value (pointers) 

//arr=&x;  not possible bcz arr is read only(constant pointer) we cannot update          arr value. 

cout<<"New ptr    :"<<ptr<<endl;


    return 0;
}