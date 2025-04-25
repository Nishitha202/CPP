#include <iostream>
#include<cstring>
using namespace std;

int main() {
int n ;
cin>>n;
cin.get();

char current[1000];
int len=0;
char largest[1000];

for(int i=0;i<n;i++){
    cin.getline(current,1000,'\n');
    
    int currentlength=strlen(current);
    
    if(currentlength>len){
        
        len=currentlength;
      strcpy(largest,current);
        
    }
}

cout<<"Largest  "<<largest<<endl;
cout<<len<<endl;
    return 0;
}