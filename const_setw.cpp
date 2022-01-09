#include<iostream>
#include<iomanip>
using namespace std ;
int main()
{
    const int a = 4 ; // read only variable.
    cout <<"the value of A is\t" <<a+1 ;
    cout <<"\nthe value of a is : " <<a*1000 <<endl ;
    cout <<"the value of a is : " <<setw(4) <<a ;
    return 0 ;
}