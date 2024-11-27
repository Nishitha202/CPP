#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n=4;

   for(int i=0;i<n;i++){
      
       for(int j=0;j<i;j++){ 
         cout<<" ";
       }
       for(int j=0;j<n-i;j++){ 
         cout<<i+1;
       }
       cout<<endl;
   }
//   cout<<num;

    return 0;
}