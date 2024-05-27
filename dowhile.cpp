#include <iostream>
using namespace std;

int main() {
   int money;
   cin>>money;
   
   do{
       cout<<"shopping with money"<<money<<endl;
       money=money-1; //decrement 
   }while(money>0);
   
    return 0;
}