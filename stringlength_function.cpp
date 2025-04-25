#include <iostream>
#include <cstring> // for strlen
#include<string>   //for getline 
using namespace std;

int length(char *arr){
    int i;
    for( i=0;arr[i]!='\0';i++){
        
    }
    return i;
}
int main() {
    // Write C++ code here
    char arr[100];
     cin.getline(arr,100);
    cout<<arr<<endl;
     cout <<strlen(arr)<<endl; 
  cout <<length(arr)<<endl;

    return 0;
}