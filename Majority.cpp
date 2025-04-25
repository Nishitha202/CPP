// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int majority(int *arr,int n){
    int count[n]={0};
 for(int i=0;i<n;i++){
     count[arr[i]]++;
     
 }
 
 for(int i=0;i<n;i++){
     if(count[i]>n/2){
        return arr[i];
     }
 }
 return -1;
 
}
int main() {
    // Write C++ code here
    int arr[7]={1,1,2,1,3,5,1};
 int n=sizeof(arr)/sizeof(int);
 cout<<majority(arr,n);
    return 0;
}