#include <iostream>
using namespace std ;

int main(){
    int marks[4] = {23,44,56,89} ;

    for (int i = 0 ; i < 4 ;i++)
    {
        cout <<marks[i] <<endl ;
        cout <<"Set new value : \t";
        cin>>marks[i] ;
    }
    cout <<"\nNew array is \n" ;
     for (int i = 0 ; i < 4 ;i++)
    {
        cout <<marks[i] <<endl ;
    }
    int* ptr = marks ;
    cout<<"\nUsing pointers \n";
    for (int i = 0 ; i < 4 ;i++)
    {
        cout <<*(ptr + i) <<endl ;
        cout <<"Set new value : \t";
        cin>>*(ptr + i) ;
    }
    for (int i = 0 ; i < 4 ;i++)
    {
        cout <<marks[i] <<endl ;
    }
    cout <<endl <<marks ;

    cout <<"IMPORTANT note on ++ operator" <<endl ;
    int newmarks[4] = {1,2,3,4} ;
    int* ptr2 = newmarks ;
    cout<<*ptr2 <<endl ;
    cout <<*(ptr2++) <<endl ;
    cout <<*(++ptr2) <<endl ;


    return 0 ;
}