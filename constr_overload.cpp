#include <iostream>
using namespace std ;

class complex 
{
int a ,b ;   
public :
    complex(int x  = 0,int y = 0)
    {
        a = x;
        b = y;
    }
   
    void display(void)
    {
        cout<<"Complex number is " <<a <<" + " <<b <<"i" ;
    }
    
};

int main(){
    complex c1(5,4);
    c1.display();
    //c1.display();
    return 0 ;
}