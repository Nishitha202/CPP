
#include <iostream>
using namespace std;
int main() {
   
int arr[10]={1,2,3,4};
cout<<arr<<endl;  //arr is a read only 

int *ptr=arr;

for(int i=0;i<4;i++){
    //Instead of arr[i] 
    cout<<ptr<< "  Data "<<*(ptr)<<endl;
     ptr=ptr+1;
    
}

ptr=arr;
for(int i=0;i<10;i++){
    //Instead of arr[i] 
    // cout<<*(ptr+i) <<", " ;
    cout<<*(arr+i)<<", ";
     
    //  cout<<*(arr-i)<<", ";
}

int *ptr1=arr+1;
int *ptr2=arr+7;

cout<<ptr1<<endl;
cout<<ptr2<<endl;

cout<<ptr2-ptr1<<endl;
return 0;
}