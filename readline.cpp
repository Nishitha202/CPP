#include <iostream>
using namespace std;
void readline(char *arr,int len,int delim){
    char ch;
    int cnt=0;
    while(true){
        ch=cin.get();
        arr[cnt]=ch;
        if(ch==delim||cnt==len-1){
            
            break;
        }
        cnt++;
    }
    arr[cnt]='\0';
    cout<<cnt<<endl;
}

int main() {
    
    char arr[10];
     readline(arr,10,'\n');
     cout<<arr;

    return 0;
}