#include <iostream>
using namespace std;
int main() {
    //Address of the integer
   int p;
   cout<<&p<<endl;
   
      //Address of the array 
   int arr[100];
   cout<<arr<<endl;
   cout<<&arr<<endl;
   
      //Address of the float
   float y;
   cout<<&y<<endl;
    
    
       //Address of the char
    char letter='A';
    cout<<(void *)&letter;  //Typecasting is necessary to print the address of the character variable

    return 0;
}