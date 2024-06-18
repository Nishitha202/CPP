#include <iostream>
using namespace std;
void  update(int *a ,int *b) {
    // Complete this function 
    
 int  tempA=*a;
  int  tempB=*b;
  *a =tempA+tempB;
  *b=abs(tempA-tempB);
   
     
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin>>a>>b;
    update(pa, pb);
    cout<<a<<endl;
   cout<< b<<endl;

    return 0;
}
