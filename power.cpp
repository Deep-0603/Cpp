#include <iostream>
using namespace std;

int power(int base,int expo)
{
    int res = 1 ;
    for(int i = 0 ; i < expo ; i++)
    {
        res *= base;
    }
    return res;
}

int main() 
{
    cout<<power(5,3) <<endl;
    
    return 0;
}
