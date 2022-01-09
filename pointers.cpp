#include <iostream>
using namespace std ;

int main(){
    int a = 40;
    cout <<"the address of a is " <<&a <<endl;
    int* ptr = &a;
    a = 50;
    cout<<"the value of a is " <<*ptr <<endl;
    cout<<"address of pointer ptr is " <<ptr <<endl;
    int *test = ptr;
    cout<<"value and address of test pointer are " <<*test
        <<" and " <<test <<endl;

    // new keyword
    int *p = new int(40);
    cout<<"the value at address of p is " <<*(p ) <<endl;
    cout <<"address of p pointer is " <<p <<endl;
    int *arr = new int[3];
    cout<<"default address are " <<endl <<&arr[0] 
        <<endl <<&arr[1]
        <<endl <<&arr[2] <<endl ;

    // delete keyword
    delete[] arr; //  necessary to free pointer from referring
    delete ptr;
    delete p;
    delete test;

    return 0 ;
}