#include <iostream>
using namespace std ;
int count = 0 ;
class num 
{
    
public :
    num()
    {
        count ++;
        cout<<"constructor is called with object number "
        <<count <<endl ;
    }
    ~num()
    {
        cout<<"Destructor is called with object number"
            <<count <<endl;
        count-- ;
    }
};
int main(){
    cout<<"MAIN FUNC"<< endl;
    num n1;
    {
        cout<<"INSIDE SCOPE" <<endl;
        cout <<"creating two more objects "<<endl;
        num n2,n3;
        cout<<"Exiting SCOPE" <<endl;
    }
    cout<<"BACK TO MAIN" <<endl;
    return 0 ;
}