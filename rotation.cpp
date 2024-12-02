// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;


int main() {
int d;
cin>>d;
int arr[6]={1,2,3,4,5,6};
int n=sizeof(arr)/sizeof(int);
for(int i=0;i<d;i++){
    int temp=arr[0];
    
    for(int j=0;j<n;j++){
        if((j+1)<n){
            arr[j]=arr[j+1];
        }
    }
    arr[n-1]=temp;
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<", ";
}
    return 0;
}
