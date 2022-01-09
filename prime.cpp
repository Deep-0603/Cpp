#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter number " <<endl ;
    cin >> num;
    for (int i = 2;i<num;i++)
    {
        if (num % i != 0 )
        {
            if (i == num -1 )
            {
                cout << "This is a prime number" <<endl;
            }
            continue;
        }
        else
        {
            cout<<"not a prime number" <<endl;
            break;
        }
        
    }
    return 0;
}