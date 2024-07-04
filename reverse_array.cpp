
#include <iostream>
using namespace std;
 void print(int  *myarray,int n)
{
    
      for(int i=0;i<n;i++){
      cout<<myarray[i]<<endl; 
    
}
}

void  Reverse(int  arr[],int n)
{
    
 for(int i=0;i<n;i++){
   cout<<arr[n-1-i]<<" ";
 }  

}



int main() {
  
  int n;
  cin>>n;
  
  int arr[n];  //array declaration
  
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }

  print(arr,n); //Function call 
  
  Reverse(arr,n);

  
  
    return 0;
}