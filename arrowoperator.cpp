#include <iostream>
using namespace std ;

class complex
{
    int real,imaginary;
public :
    complex(){}
    complex(int a,int b)
    {
        real = a;
        imaginary = b;
    }
    void getdata()
    {
        cout<< "complex number is " 
            <<real <<" + " <<imaginary <<"i" <<endl;
    }
};
int main()
{
    //complex* ptr;
    
    int n ;
    cout <<"number of complexes you want." <<endl ;
    cin>>n;
    complex *ptr = new complex[n];
    complex *temp = ptr;
    for (int i = 1; i < 2 * n; i += 2)
    {
        ptr[i] = complex(i,i+1);
        (ptr + i) ->  getdata();
    }
    cout<<"---------------------------" <<endl;
    //ptr = temp;
    
    for (int i = 1; i < 2 * n; i += 2)
    {
        ptr[i] = complex(i,i+1);
        (ptr + i) ->  getdata();
    }
    return 0 ;
}
