#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
 int i;
for ( i=1;i<=n;i++){
    cout<<i<<endl;//i is local to the block scope
    
}
cout<<"After the  loop "<<i<<endl;
    return 0;
}