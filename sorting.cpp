#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int arr[]={5,2,4,3,1};
    int n=sizeof(arr)/sizeof(int);
   
   //Bubble sort (sorting in ascending order)
 for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
         if(arr[j]>arr[j+1]){
             if((j+1)<n){
             int temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
             }
         }
     }
 }
 
 for(int i=0;i<n;i++){
     cout<<arr[i]<<",";
 }
}