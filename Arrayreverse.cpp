#include <iostream>

using namespace std;

void reversearray(int *arr,int n){
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
     cin>>N;
    int arr[N];
       
   
    
    for(int i=0;i<N;i++){
        cin>>arr[i];
        
    }
   reversearray(arr,N);
    return 0;
}
