#include <iostream>
using namespace std;

int main() {
  
    int arr[]={1,4,3,2,6,5};
    int n=sizeof(arr)/sizeof(int);
  int temp[n];
  // copying the elements from original array to temporary array in reverse order
  for(int i=0;i<n;i++){
      temp[i]=arr[n-i-1];
  }
  
  //Printing the reverse of the array 
    for(int i=0;i<n;i++){
      cout<<temp[i]<<",";
  }
}