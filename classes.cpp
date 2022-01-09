#include <iostream>
using namespace std ;

class Employee
{
    private :
        int a , b ,c ; 
    public :
        int d ,e ;
        void setdata(int x,int y,int z);
        void getdata()
        {
            cout<<"value of a is "<<a <<endl;
            cout<<"value of b is "<<b <<endl;
            cout<<"value of c is "<<c <<endl;
            cout<<"value of d is "<<d <<endl;
            cout<<"value of e is "<<e <<endl;
        }
};
void Employee :: setdata(int x,int y,int z)
{
    a = x;
    b = y;
    c = z;
}
int main(){

    Employee harry;
    harry.d = 12;
    harry.e = 15;
    harry.setdata(1,2,3);
    harry.getdata();

    return 0 ;
}