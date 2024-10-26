
#include <iostream>
using namespace std;

class Employee{
public:
    string Name;        //attributes or class Member functions
    string company;
    int age;

void IntroduceYourself(){      // class Method 
     cout<<"Name: "<<Name<<endl;
     cout<<"company: "<<company<<endl;
     cout<<"age: "<<age<<endl;
     cout<<"-------------------------"<<endl;
}


Employee(string name,string comp,int Age){ //when we created our own  constructor  .....we lost our default constructor
 Name=name;
 company=comp;
 age=Age;
}

};
int main() {
    // Write C++ code here
   
    Employee employee1=Employee("Nishtha","Amazon",21) ;//constructor is invoked
    
    // employee1.Name="Nishtha";
    // employee1.company="Amazon";
    // employee1.age=21;
    employee1.IntroduceYourself();
    
    Employee employee2=Employee("Nish","Accenture",21);   //constructor is invoked 
    // employee2.Name="Ram";
    // employee2.company="google";
    // employee2.age=23
    employee2.IntroduceYourself();
 
 //Default constructor -constructor is a term that is automatically  generataed by the compilers
 

    return 0;
}