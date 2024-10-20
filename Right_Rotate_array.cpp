#include <iostream>
using namespace std;
int main() {
   
  int arr[]={10,20,30,40,50};
  int temp=0,num;
  int n=sizeof(arr)/sizeof(int);
  
  cout<<"Enter number of rotations";
  cin>>num;
  
  for(int y=0;y<num;y++){
      temp=arr[n-1];
      for(int i=n-1;i>0;i--){

              arr[i]=arr[i-1];
         
      }
      arr[0]=temp;
  }
 
 for(int i=0;i<n;i++){
     cout<<arr[i]<<endl;
 }
    return 0;
}