#include <iostream>
using namespace std;
//pass by reference using reference variables
void incMoney(int  &mymoney) 
{
mymoney=2*mymoney;
cout<<mymoney<<endl;
}


int main(){
int money=10;

incMoney(money);
cout<<"Main"<<": "<<money<<endl;

return 0;
}