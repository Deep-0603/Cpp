#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std ;

class complex
{
    int a,b;
public:
    complex(int x , int y)
    {
        a = x;
        b = y;
    }
    void getnumber(void){
        cout <<"complex number is "<<a <<" + " <<b <<"i" <<endl ;
    }
};
class Point
{
    int a,b;
public:
    Point(int x,int y)
    {
        a = x ;
        b = y ;
    }
    void display(void)
    {
        cout<<"Absissa and ordinate of a point are " <<a <<" & " <<b <<endl;
    }
    friend float dist(Point,Point);
};
float dist(Point p1,Point p2)
{
    float d = sqrt((p1.a - p2.a) * (p1.a-p2.a) + (p1.b - p2.b)*(p1.b - p2.b));
    return d ;
}
int main(){
    float d ;
    complex c1(4 ,6); // inplicit call
    complex c2 = complex(5,7); // explicit call
    c1.getnumber();
    c2.getnumber();
    Point p1(1,2);
    Point p2 = Point(5,80);
    p1.display();
    p2.display();
    d = dist(p1 , p2);

    cout <<"Distance between these two points is " 
    <<setprecision(3) <<d <<endl <<1000;
    return 0 ;
}
// Parameterized constructor takes 
// parameters and invoke with those automatically.
// iomanio is used for formatting of numbers and alphabets 
// basicaly like uppercase or aplhanumeric and so on

/* 
setprecision do not set values after decimal but 
counts from the begginnig
ex - 32.15 counts setprecision 4 (not 2) 
*/