#include <iostream>
using namespace std;
//Encapsulation 
class Employee{
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

};
int main() {
    // Write C++ code here
  
    
    Employee employee1=Employee("Nishitha","Amazon",21) ;//constructor is invoked 
    // employee1.Name="Nishtha";
    // employee1.company="Amazon";
    // employee1.age=21;
    employee1.IntroduceYourself();
    
    employee1.setAge(18);
    //  employee1.setname("Kushalavathi");
    cout<<"My name is "<<employee1.getName()<<" and "<<employee1.getAge()<<" and "<<employee1.getcompany()<<endl;
   
    
    Employee employee2=Employee("Nish","Accenture",21);   //constructor is invoked 
    // employee2.Name="Ram";
    // employee2.company="google";
    // employee2.age=23
    employee2.IntroduceYourself();
    // employee1.Name;
 
 //Default constructor -constructor is a term that is automatically  generataed by the compilers
 

    return 0;
}