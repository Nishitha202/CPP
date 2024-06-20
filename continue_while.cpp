#include <iostream>
using namespace std;
int main(){
int i=1;

while(i<=20){
    if(i%7==0){
        cout<<"Multiple of 7"<<endl; 
        i=i+1;
        continue;  //go back to while loop
    }
    cout<<i<<endl;
    i++;
    
}

    return 0;
}