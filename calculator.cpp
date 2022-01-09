#include <iostream>
#include <iomanip>
#include "root.cpp"
using namespace std;

class calculator
{
protected:
public:
    int x , y;
    
    calculator(int a = 0,int b =0)
    {
        x = a;
        y = b;
    }
    void add(void)
    {
        cout <<"SUM OF NUMBERS IS "<<x + y <<endl;
    }
    void subs(void);
    void multi(void)
    {
        cout <<"MULTIPLICATION OF NUMBERS IS " <<x * y <<endl;
    }
    void divi(void);
    
};
class scientific_calculator : public calculator
{
protected :
    int w,s;
public :
    
    scientific_calculator(calculator O)
    {
        w = O.x;
        s = O.y;
    }
    static void change(int &g , int &h)
    {
        int temp = g;
        g = h;
        h = temp;
    } 
    void power(void)
    {
        int res = 1 ;
        for(int i = 0 ; i < s ; i++)
        {
            res *= w;
        }
    cout<<s <<" times " <<w <<" is " <<res <<endl;
    }
    void percent(void)
    {
        cout <<"Percentage covered is " <<setprecision(3) <<(float(w)/float(s)) * 100 <<endl;
    }
    void sqrt(void)
    {
        w = root(w);
        s = root(s);     
    }

    friend void calculator :: divi(void);
    friend void calculator :: subs(void);
};
void calculator :: divi(void)
{
    if (x/y < 1 )
    {
        scientific_calculator :: change(x , y);
    }
    cout<< "DIVISION OF NUMBERS IS "<< float(x / y) <<endl;
}
void calculator :: subs(void)
{
    if (x-y < 0)
    {
        scientific_calculator :: change(x , y);
    }
    cout <<"DIFFERENCE IN NUMBERS IS "<<x - y<<endl;
}
int main(){
    calculator Object1(9,26);
    Object1.add();
    Object1.subs();
    Object1.multi();
    Object1.divi();

    scientific_calculator Linkobject(Object1);
    Linkobject.percent();
    Linkobject.sqrt();
    Linkobject.power();

    return 0 ;
}