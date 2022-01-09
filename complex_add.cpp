#include<iostream>
using namespace std;

class complex
{
    int r ,i ;
    public:
        void setdata(void)
        {
            cout<<"Enter real and imaginay number" <<endl;
            cin >>r >>i ;
        }
        void getdata(void)
        {
            cout<<"Complex number is " <<r <<" + " <<i <<"i" <<endl;
        }
        static complex complex_add(complex o1,complex o2)
        {
            complex o3;
            o3.r = o1.r + o2.r ;
            o3.i = o1.i + o2.i ;
            cout<<"Added complex number is " <<o3.r <<" + " <<o3.i <<"i" <<endl;
            return o3;
        }
        friend complex multi_complex(complex o1,complex o2);
        
};
complex multi_complex(complex o1,complex o2)
{
    complex o3;
    o3.r = o1.r*o2.r - o1.i*o2.i;
    o3.i = o1.r*o2.i + o1.i*o2.r;
    cout<<"Multiplied complex number is " <<o3.r <<" + " <<o3.i <<"i" <<endl;
    return o3;
}


int main()
{
    complex a,b,c,d;
    a.setdata();
    b.setdata();
    c = complex :: complex_add(a,b);
    d = multi_complex(a,b);
    c.getdata();
    d.getdata();
    return 0;
}