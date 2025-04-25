#include <iostream>
using namespace std;

class  Instrument{
 public:
 virtual void Makesound(){
     cout<<"Instrument  playing...\n";
 }
};

class Acordian:public Instrument{ //Derived class 
public:
 void Makesound(){
     cout<<"Acordian playing...\n";
 }
};

int main() {
Instrument *i1=new Acordian(); 
// Instrument i1;
i1->Makesound();

    return 0;
}