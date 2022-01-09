#include <iostream>
using namespace std ;

class baseclass
{
public :
    int var_base;
    void display()
        {
            cout <<"displaying base class variable " <<var_base <<endl;
        }
};
class derivedclass : public baseclass
{
public:
    int var_derived;
    void display()
    {
        cout <<"displaying derived class variable " <<var_derived <<endl;
    }
};
int main(){
    baseclass * ptr ;
    baseclass obj_base;
    derivedclass obj_derived;
    ptr = &obj_derived;

    /*
    pointer of base classs can point to an object of 
    derived class but can only use members of base class. 
    */
    ptr -> var_base = 34;
    ptr -> display();

    derivedclass * newptr;
    newptr = &obj_derived;
    newptr -> var_derived = 10;
    newptr -> display();
    return 0 ;
}

/*
 Polymorphism -- many forms
 ex - overloaded function
    compile time polymorphism(early binding)
        FUNCTION OVERLOADING
        OPERATOR OVERLOADING
    run time polymorphism(late binding)
        VIRTUAL FUNCTIONS

*/