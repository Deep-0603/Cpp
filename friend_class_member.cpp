#include <iostream>
using namespace std ;
class complex;
class calculator
{
    public :
        int add(int a,int b)
        {
            return a + b ;
        }
        int complex_realadd(complex,complex);
        int complex_imagadd(complex,complex);

};

class complex
{
    int a,b;
    friend class calculator ;
    public :
        void setdata(int r,int i)
        {
            a = r;
            b = i;
        }
        void getdata(int r,int i)
        {
            cout <<"Complex no. is " <<a <<" + " <<b <<"i"  <<endl ;
        }
};
int calculator :: complex_realadd(complex o1,complex o2)
        {
            return ( add(o1.a,o2.a) );
        }
int calculator :: complex_imagadd(complex o1,complex o2)
        {
            return ( add(o1.b,o2.b) );
        }

int main(){
    
    return 0 ;
}