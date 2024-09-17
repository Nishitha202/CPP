#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
     int arr[]={6,-3,4,-7};
  int n=sizeof(arr)/sizeof(int);
  int sum=0,great=0,great_new=0;
  
 for(int i=0;i<n;i++)
 {
     sum=sum+arr[i];
   int  great_new=sum;
     
     if(great_new >great){
         
         great=great_new;
     }
    
 }
 cout<<great<<endl;

    return 0;
}