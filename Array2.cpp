
#include <iostream>
using namespace std;

int main() {


  int n;
  
  cin>>n;
  //n is the size of the array
  int arr[n];
  
   cout<<sizeof(arr)/sizeof(int)<<endl;  
  
  
  for(int i=0;i<=n-1;i++){
      cin>>arr[i];
  }
  

  for(int i=0;i<=n-1;i++){
      cout<<arr[i]<<endl;
      }
    return 0;
}