#include <iostream>
using namespace std;

int main() {
    // Write C++ code here

string s1,s2;
cin>>s1;
cin>>s2;
bool areEqual=true;
int i=0;

while(s1[i]!='\0'&& s2[i]!='\0'){
    if(s1[i]!=s2[i]){
        areEqual=false;
        break;
    }
    i++;
    
}

if(areEqual &&s1[i]=='\0'&&s2[i]=='\0'){
    cout<<"equal";
}else{
     cout<<" Not equal";
}
    return 0;
}