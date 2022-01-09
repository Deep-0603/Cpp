#include <iostream>
using namespace std ;

class number
{
    int a;
public :
    number()
    {
        a = 0;
    }
    number(int num)
    {
        a = num ;
    }
    number(number &obj)
    {
        a = obj.a ;
        cout <<"copy constructor called " <<endl ;
    }
    void display(void)
    {
        cout <<"the number for this object is "<<a <<endl ;
    }

};
int main(){
    number x,y,z(45) ;
    number z1(z);
    z1.display();
    z.display();

    return 0 ;
}