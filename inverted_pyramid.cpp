// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
   cin>>n;
   
for(int i=n;i>0;i--){
    for(int j=1;j<=n;j++){
      if(j<=i){
          cout<<"* ";
      }
    }
    cout<<endl;
}
    return 0;
}