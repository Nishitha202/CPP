//Program to cyclically rotate an array by one
#include <iostream>
using namespace std;

int main() {
    
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int num;
    int temp=0;
    cout<<"how many times to rotate"<<endl;
    cin>>num;
    
    for(int y=0;y<num;y++){
         temp=arr[n-1];
        for(int i=n-1;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }

}