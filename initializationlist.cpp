#include <iostream>
using namespace std ;

class Test
{
    int a,b;
public :
    Test(int i,int j) : a(i),b(j + a) // a will be initialized first
                                      //first bcoz declares first
    {
        cout<<"constructor executed " <<endl;
        cout<<"value of a is " <<i <<endl;
        cout<<"value of b is " <<j <<endl;
    }
};

int main(){
    Test t(3,4);

    return 0 ;
}