// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    // Write C++ code here
 int arr[]= {1, 2, 4, 6, 3, 7, 8} ;
 int n=8;
// sort(arr,arr+n,greater<int>());
//  for(int i=0;i<n-1;i++){
//      cout<<arr[i]<<",";
//  }
 sort(arr,arr+n-1);
 for(int i=1;i<=n-1;i++){
     if(i!=arr[i-1]){
         cout<<i<<endl;
         break;
 }
}
    return 0;
}