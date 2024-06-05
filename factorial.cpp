#include <iostream>
using namespace std;
 int fact(int n){
     int ans=1;
     
if(n==0)
   return 0;

for(int i=1;i<=n;i++){
    ans=ans*i;
   
} 
return ans;
}

   
int main() {
int n;
cout<<"enter the value of n"<<endl;
cin>>n;


int ans= fact(n); //function call

 
 cout<<"Factorial of "<<n<<" is "<<ans<<endl; 
    return 0;
}