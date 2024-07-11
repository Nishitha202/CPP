
#include <iostream>
using namespace std;
 void print(int  *myarray,int n)
{
    
      for(int i=0;i<n;i++){
      cout<<myarray[i]<<endl; 
    
}
}

void  Reversearray(int  arr[],int n)
{
 
 int s=0;
 int e=n-1;
 
 while(s<e){
swap(arr[s],arr[e]);
s++;
e--;
 }


}

int main() {
  
  int n;
  cin>>n;
  
  int arr[n];  //array declaration
  
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }

 //Function call 
  
  
   Reversearray(arr,n);
     print(arr,n);

  
    return 0;
}