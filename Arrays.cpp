#include <iostream>
using namespace std;
int main() {
    // Write C++ code her
    
    int arr[]={7,1,9,5,5};
    int count=0,sum=0;
    int num=10;
    
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        
        for(int j=i+1;j<n;j++){
            
            sum=arr[i]+arr[j];
            if(sum==num){
                count++;
        }
        }
        
    }
    cout<<count<<endl;
    return 0;
}