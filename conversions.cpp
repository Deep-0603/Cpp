# include <iostream>
#include <cmath>
using namespace std;

int binary_decimal()
{
    int n,rem,result = 0,i = 0;
    cout <<"enter a binary number"<<endl;
    cin >>n;
    while (n != 0)
    {
        rem = n % 10;
        result += rem * pow(2,i);
        i++;
        n = n / 10;
    }
    cout << result <<endl;
    return result;
}
int octal_decimal()
{
    int n,rem,result = 0,i = 0;
    cout <<"enter a binary number"<<endl;
    cin >>n;
    while (n != 0)
    {
        rem = n % 10;
        result += rem * pow(8,i);
        i++;
        n = n / 10;
    }
    cout << result <<endl;
    return result;
}
int hexadecimal_decimal()
{
    int n,rem,result = 0,i = 0;
    cout <<"enter a binary number"<<endl;
    cin >>n;
    while (n != 0)
    {
        rem = n % 10;
        result += rem * pow(16,i);
        i++;
        n = n / 10;
    }
    cout << result <<endl;
    return result;
}
int decimal_binary()
{
    int n,addzero,result = 0,rem,temp =0;
    cout <<"enter a number" <<endl;
    cin >>n;
    addzero = n;
    if (n==1)
    {
        cout << 1;
        return 1;
    }
    else
    {
        while (n != 0)
        {
            rem = n % 2;
            temp = temp*10 + rem;
            n/= 2;
        }
        while (temp != 0)
        {
            rem = temp % 10;
            result = result * 10 + rem;
            temp = temp / 10;
        }
        if (addzero % 2 == 0)
        {
            result *= 10;
        }
        cout << result <<endl;
        return result;
    }
    
}
int add_binary()
{
    int first,second,rem1,rem2,temp,result = 0,pow = 0;
    cout <<"enter two binary numbers " <<endl;
    cin >>first >>second;
    while (first != 0 && second != 0 )
    {
        rem1 = first%10;
        rem2 = second%10;
        temp = rem1 + rem2;
        switch (temp)
        {
        case 0:
            if (pow == 0)
            {
                result *= 10;
            }
            else if (pow == 1)
            {
                result *= 10;
                result += 1;
                pow = 0;
            } 
            break;
        case 1:
            if (pow == 0)
            {
                result *= 10;
                result += 1;
            }
            else if (pow == 1)
            {
                result *= 10;
                pow = 1;
            }
            break;
        case 2:
        if (pow == 0)
        {
            result *= 10;
            pow = 1;
        }
        else if (pow == 1)
        {
            result *= 10;
            result += 1;
            pow = 1;
        }
            break;
        }
        first /= 10;
        second /= 10;
        if (first == 0 && second ==0 && pow == 1)
        {
            result *= 10;
            result += 1;
            pow = 0;
        }
    }

    temp = result;
    result = 0;

    while (temp != 0)
    {
        rem1 = temp % 10;
        result *= 10;
        result += rem1;
        temp /= 10;
    }
    cout <<result <<endl;
    return result;
}

int main ()

{
    //binary_decimal();
    //octal_decimal();
    //hexadecimal_decimal();
    //decimal_binary();
    add_binary();
    return 0;
}