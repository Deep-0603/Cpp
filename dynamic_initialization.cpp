#include <iostream>

using namespace std ;

class deposit 
{
    int prin,time;
    float rate;
    
public :
    deposit()
    {
        prin = 10000;
        time = 1;
        rate = 0.1;
    }
    deposit (int P,int T,int R)
    {
        prin = P;
        time = T;
        rate = (float)R/100;
        cout <<"integer type" <<endl;
    }
    deposit(int P,int T,float Rat)
    {
        prin = P;
        time = T;
        rate = Rat;
        cout <<"float type" <<endl;

    }
    float power(float r,int t);
    
    //float amt = prin * pow((1 + rate),time);
    void display(void)
    {
        cout<<"Total amount given at the end of " 
            <<time <<" years with interest rate "<<rate
            <<"%" <<" for the principal of " <<prin <<" rupees is "
            <<endl <<power(rate,time);
    }

};
float deposit :: power(float r,int t)
{
    int sum = prin;
    for(int i = 0 ; i < t ; i++)
    {
        sum *= float(1+r);
        cout <<sum <<endl;
    }
    return sum;
}
int main(){
    int a,b;
    float c;
    if (c > 1)
    {
        int c = c;
    }
    else
    {
        float c = c ;
    }
    cout <<"Enter Principle,time and rate in correct sequence" <<endl ;
    cin>>a >>b >>c;
    deposit deepanshu(a,b,(float)0.1);
    deepanshu.display();
    return 0 ;
}