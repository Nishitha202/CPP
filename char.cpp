#include <iostream>
using namespace std;

int main() {
  char arr[100];
  
  arr[0]='a';
  arr[1]='b';
  arr[2]='c';
    
    cout<<arr<<endl; // Print the content of the array --> abci?
    char *ptr=arr;   //Storing the address of the character array in the char                    pointer
    cout<<ptr<<endl;  //Print the content of the array  abci?
    
    
    //Typecasting and fooling the cout ,that it is not the char array but some other type of array .So that it will print the address of the array
    cout<<(int *)ptr<<endl; // Generally dont typecast it into integer 
    cout<<(void *)ptr<<endl;
    cout<<(char *)ptr<<endl;


//Another way to declare arrays 
char b[]={'x','y','z','\0'};
cout<<sizeof(b)<<endl;
cout<<b<<endl;

//Another way to declare arrays
char c[]="Hello"; // This is the corrected way ,where the array is null                          terminated 
cout<<sizeof(c)<<endl;
cout<<c<<endl;


return 0;
}