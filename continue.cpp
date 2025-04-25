#include <iostream>
using namespace std;
int main(){
int i;

for(i=1;i<=20;i++){
    if(i%7==0){
        cout<<"Multiple of 7"<<endl;
        i=i+1;
        continue;
    }
    cout<<i<<endl;
    
}

    return 0;
}