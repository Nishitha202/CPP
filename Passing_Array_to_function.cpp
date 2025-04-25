
#include <iostream>
using namespace std;
 void print(int  *myarray,int n)
{
    
//    int n=sizeof(myarray)/sizeof(int); (8/4)==2
    
      for(int i=0;i<n;i++){
      cout<<myarray[i]<<endl;  // myarray[i] ---> *(myarray + i)
  }
    cout<<"size of arr"<<sizeof(myarray);
    
}
int main() {
  
  int n;
  cin>>n;
  
  int arr[n];  //array declaration
  
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  cout<<"size of arr:"<<sizeof(arr)<<endl;   //size of arr =no of bucket * size of each bucket

  
  print(arr,n); //Function call 
    return 0;
}