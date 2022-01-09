#include <iostream>
using namespace std ;

class base1
{
public :
    void greet(void)
    {
        cout <<"How are you ??" <<endl ;
    }
};
class base2
{
public :
    void greet(void)
    {
        cout <<"KAISE HO ??" <<endl ;
    }
};
class derived : public base1,public base2
{
    int a;
public :
    void greet(void)
    {
        base1 :: greet();
    }
};
class BASE
{
public :
    void say(void)
    {
        cout <<"hello world" <<endl;
    }
};
class TOP : public BASE
{
public :
    void say(void)
    {
        cout <<"hello all my friends" <<endl;
    }
};
class OVER : public TOP
{

};

int main(){
    base1 obj1;
    obj1.greet();
    base2 obj2;
    obj2.greet();
    derived d;
    d.greet();
    BASE b;
    b.say();
    TOP t;
    t.say();
    OVER o;
    o.say();

    return 0 ;
}