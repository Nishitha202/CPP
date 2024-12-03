#include <iostream>
#include<climits>
using namespace std;

int main() {
    // Write C++ code here
int arr[]={2,4,1,3,9};
int n=sizeof(arr)/sizeof(int);
int min=INT_MAX;
int max=INT_MIN;
int index_of_min=0,index_of_max=0;

for(int i=0;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
        index_of_min=i;
    }
    
    if(arr[i]>max){
        max=arr[i];
        index_of_max=i;
    }
    
}

swap(arr[index_of_min],arr[index_of_max]);

for(int i=0;i<n;i++){
    cout<<arr[i]<<",";
}
    return 0;
}