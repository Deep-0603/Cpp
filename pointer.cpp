#include <iostream>
using namespace std ; 

int main()
{
    int a = 3 ;
    int* b = &a ;
    cout <<"value of a is : "<<a <<endl ;
    cout <<"value at pointer b is : "<<*b <<endl ;
    cout <<"Address of a is : "<<&a <<endl ;
    cout <<"Address of a stored in b is : "<<b <<endl ;
    cout <<"value at first character in array b is : " <<b[0] <<endl ;
    int** c = &b ;
    cout <<"value at pointer c is : " <<**c <<endl ;
    cout <<"address of pointer c is : " <<c <<endl ;
    return 0 ;
}