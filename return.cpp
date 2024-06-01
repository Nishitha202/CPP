#include <iostream>
using namespace std;
int add(int a ,int b,int c){
    return a+b+c;
}


int main() {
int a=10,b=15,c=5;   
int sum =add(a,b,c);
cout<<sum;
    return 0;
}