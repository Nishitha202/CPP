#include <iostream>
using namespace std;
int main() {
int N;
cin>>N;
int i;
for( i=2;i<N;i++){
    if(N%i==0)
      break;
}

if(N==i){
    cout<<"Prime"<<endl;
}
else{
    cout<<"Not a prime "<<endl;
}
    return 0;
}