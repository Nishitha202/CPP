#include <iostream>
using namespace std;

void playmusic(int song,int duration=8){  

    cout<<"playing music"<<" song  :"<<song<<"duration :"<<duration<<endl;
    
}


int main() {
    
 playmusic(5,10);      //Function call
 playmusic(5,10);
  playmusic(5);

    return 0;
}