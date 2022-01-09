// header files - system header AND user defined.
#include <iostream> //input output commands.
/* 
#include "file_name"
user can define header file like this.
*/


// ALTER : using namespace std.


using namespace std;
int sum(int a , int b)
{
    return a + b;
}
int diff(int a , int b)
{
    if(a > b)
    {
        return a - b;
    }
    else
    {
        return b - a;
    }
}
int main()            // function declaration
{
    int a ;
    float b;
    cout <<"FIrst value is\t";
    cin >>a;
    cout <<"\nSecond value is\t";
    cin >>b;
    cout <<"Sum is\t" <<sum(a,b) <<"\nDifference is\t" <<diff(a ,b); // standard namespace.
    // std :: cout <<"Hello World": (ALTER)
    cout <<"Alternate of esacpe neew line." <<endl;
    return 0;          // confirmation of termination
}

/* 
Variables upto 255 characters 
initials - character or underscore
NO spaces or keyword
CASE SENSITIVE
int , float , double, boolean
*/
