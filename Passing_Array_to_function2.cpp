
#include <iostream>
using namespace std;
 void print(int  *myarray)
{
    
  int n=sizeof(myarray)/sizeof(int); 
    
      for(int i=0;i<n;i++){
      cout<<myarray[i]<<endl;
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
  cout<<"size of arr:"<<sizeof(arr)<<endl;

  
  print(arr);
    return 0;
}