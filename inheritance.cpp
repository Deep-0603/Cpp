/* INHERITANCE 
--- reusability 
--- classes can inherit variables,functions and other member
--- DRY - DO NOT REPEAT YOURSELF (basic rule of programing)
Base class can be more than one OR single inherited class.
1- Multiple Inheritance
2- Hierarchical inheritance
3- multilevel inheritance
4- hybrid inheritance = multiple + multilevel
Private members can never inherited.
class {{derived class name}} : {{visibility mode}} {{base class name}}
visibility mode --- 
1 Public -- Public members of base class will become public
            members of inherited class
2- Private -- Public members of base class will become 
            private members of inherited class. 
DEFAULT is PRIVATE 
*/

#include <iostream>
using namespace std ;
 
class Employee        // BASE CLASS
{
    float salary;
public :
    int id;
    Employee(){}
    Employee(int EmpId)
    {
        salary = 100;
        id = EmpId;
    }
    void display(void)
    {
        cout<<"Salary of employee with id " <<id <<" is "
            <<salary <<" rupees" <<endl;
    }
};
// Derived Class
class Programmer : public Employee
{
public :
    int lang_code = 9;
    Programmer(int EmpId)
    {
        id = EmpId ;
    }
    void display(void)
    {
        cout<<"Language code is " <<lang_code <<" and employee id is "
            <<id <<endl;
    }
};
int main(){
    Employee harry(1),rohan(2);
    harry.display();
    rohan.display();
    Programmer skillf(10);
    skillf.display();
    
    cout<<skillf.id<<endl; // only possible if inherited 
                           // publically.
    return 0 ;
}