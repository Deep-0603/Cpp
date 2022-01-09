#include <iostream>
using namespace std ;

class complex 
{
    int a ,b;
public:
    complex(void) // **constructor**
    {
        a = 0 ; // can be any value.
        b = 0 ;
    }
    void getvalue(void)
    {
        cout <<"Complex number is "<<a <<" + " <<b <<"i" <<endl ;
    }
};
int main(){
    complex o1 ;
    o1.getvalue();
    return 0 ;
}

// constructor
/*
Define in Public section 
It is of same name as of the class.
It is used to initialize the values of any no. of variables
automatically when they are formed.
Can be define outside of class also.
NEVER give return type 
NEVER change name of constructor
It can be deafault(do not take paremeter) or NOT 
It can take any valid statement not only variables
We cannot refer to their address
*/
