#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
   int N=8;
   int arr[N]={1,1,0,1,2,5,6,2};
   int count[10]={0};
   
   for(int i=0;i<N;i++){
       count[arr[i]]++;
       int occ=count[arr[i]];
   
       float value=float(arr[i])/10;
       float ans=occ*occ+value;
       cout<<ans<<",";
   }
   
   
    return 0;
}


//1.1,4.1 ,1 ,9.1,1.2,1.5,1.6,4.2