#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
     int arr[]={6,7,1,2,3,4,5};
  int n=sizeof(arr)/sizeof(int);
  
  int count=0;
  int key=1;
  int orginal_position=3;
  int i=0;
  
  while(arr[i]!=key){
      count++;
      i++;
  }
  
  cout<<count;

    return 0;
}