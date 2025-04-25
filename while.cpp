#include <iostream>
using namespace std;
int main() {

int n;
cin>>n;//Taking n numbers as input
int i=1;
int sum=0;

while(i<=n)
{
    int no;
   cin>>no;
  sum=sum+no;
   i=i+1;
}
cout<<"sum:"<<sum;
    return 0;
}