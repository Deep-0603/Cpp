#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a number \n";
    cin >> n;
    int q = 2;
    int arr[10000];
    arr[0] = 1;
    int len = 1;
    int x = 0;
    int num ;
    while (q <= n)
    {
        x = 0;
        num = 0;
        while (x < len)
        {
            arr[x] = arr[x]*q;
            arr[x] += num;
            num = arr[x]/10;
            arr[x] = arr[x] % 10;
            x++;
        } 
        while(num != 0)
        {
            arr[len] = num % 10;
            num /= 10 ;
            len ++; 
        }
        q++;
    }
    cout << "factorial of " <<n <<" is a " <<len
        <<" digit number \n";
    len--;
    while(len >= 0)
    {
        cout <<arr[len];
        len--;
    }
    return 0 ;
}
