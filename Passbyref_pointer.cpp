#include <iostream>
using namespace std;
//pass by reference using pointers
void incMoney(int *moneyptr) 
{
 (*moneyptr)=2*(*moneyptr);
cout<<(*moneyptr)<<endl;
}


int main(){
int money=10;

incMoney(&money);
cout<<"Main"<<": "<<money<<endl;

return 0;
}