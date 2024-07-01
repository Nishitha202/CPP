
#include <iostream>
using namespace std;
 void print(int  *myarray,int n)
{
    
      for(int i=0;i<n;i++){
      cout<<myarray[i]<<endl; 
    
}
}

int Linearsearch(int  arr[],int n, int key)
{
    
 for(int i=0;i<n;i++){
     if(arr[i]==key){
         return i;
     }
 }  
 return -1;
}



int main() {
  
  int n;
  cin>>n;
  
  int arr[n];  //array declaration
  
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }

  print(arr,n); //Function call 
  
  int key;
  cout<<"Enter the key element"<<endl;
  cin>>key;
  
 int res = Linearsearch(arr,n,key);
 
 if(res==-1){
     cout<<"Element is not present"<<endl;
 }
 else{
     cout<<"Element is  present at "<<res<<endl;
 }
  
  
    return 0;
}