#include <iostream>
using namespace std;

class AbstractEmployee{                  //abstract 
  virtual void  askforpromotion()=0;
};



//Encapsulation 
class Employee:AbstractEmployee{
private:                //cant access outside the class
    string Name;        //attributes or class Member functions
    string company;
    int age;
public:  
    void setname(string name){  //setter
        Name=name;
    }
    string getName(){           //getter
        return Name;
    }
    void setcompany(string comp){
        company=comp;
    }
    string getcompany(){
        return company;
    }
    void setAge(int Age){
        if(Age>=18)
        age=Age;
    }
    int getAge(){
        return age;
    }

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

void askforpromotion(){
    if(age>30){
        cout<<Name<<"got promoted"<<endl;
        }else{
             cout<<Name<<"not promoted"<<endl;
        }
}

};
int main() {
    // Write C++ code here
  
    
    Employee employee1=Employee("Nishitha","Amazon",21) ;//constructor is invoked 

    Employee employee2=Employee("Nish","Accenture",45);   //constructor is invoked 
 employee1.askforpromotion();
 employee2.askforpromotion();
 //Default constructor -constructor is a term that is automatically  generataed by the compilers
 

    return 0;    
}