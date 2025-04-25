#include <iostream>
using namespace std;
int main(){
 int cal=0;
 int mom_calls_up=10;
 
 while(cal<=20){
     cout<<"Running and burning calories"<<cal<<endl;
     if(cal==mom_calls_up)
         break;
         cal=cal+1;
 }
 
 cout<<"Workout complete"<<cal<<endl;

    return 0;
}