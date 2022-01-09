#include <iostream>
using namespace std ;

class complex
{
    int real,imaginary;
public :
    complex(int a,int b)
    {
        real = a;
        imaginary = b;
    }
    void getdata()
    {
        cout<< "complex number is " 
            <<real <<" + " <<imaginary <<"i" <<endl;
    }
    
};
int main(){
    complex C1(5,6);
    C1.getdata();
    complex* ptr = &C1;
    (*ptr).getdata();
    complex* p = new complex(4,8);
    (*p).getdata();
    return 0 ;
}