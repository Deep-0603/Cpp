#include <iostream>
using namespace std;

class C2;
class C1
{
    int val;
    friend void swapp(C1 &, C2 &);

public:
    void instdata(int a)
    {
        val = a;
    }
    void display(void)
    {
        cout <<val << endl;
    }
};

class C2
{
    int valu;
    friend void swapp(C1 &, C2 &);

public:
    void instdata(int a)
    {
        valu = a;
    }
    void display(void)
    {
        cout <<valu << endl;
    }
};
void swapp(C1 & x, C2 & y) //referance is taken bcoz formal parameters copies value only.
{
    int temp = x.val;
    x.val = y.valu;
    y.valu = temp;
}

int main()
{
    C1 o1;
    C2 o2;

    o1.instdata(5);
    o2.instdata(3);

    swapp(o1, o2);  // object contains address in it and hence & is not needed with object in parameter.
 
    o1.display();
    o2.display();

    return 0;
}