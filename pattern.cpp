#include <iostream>
using namespace std;
void rectangle_pattern()
{
    int l, b;
    cout << "enter length and breadth " << endl;
    cin >> l >> b;
    for (int i = 0; i < l; i++)
    {
        for (int i = 0; i < b; i++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void hollow_rectangle()
{
    int l, b;
    cout << "enter length and breadth " << endl;
    cin >> l >> b;
    for (int i = 0; i < l; i++)
    {
        if (i == 0 || i == (l - 1))
        {
            for (int i = 0; i < b; i++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        else
        {
            for (int i = 0; i < b; i++)
            {
                if (i == 0 || i == (b - 1))
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
}
void inverted_half_pyramid()
{
    int num;
    cout << "enter number " << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < (num - i); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void half_pyramid()
{
    int num;
    cout << "enter number " << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int j = num - 1; j >= 0; j--)
        {
            if (j <= i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
void half_pyramid_number()
{
    int num;
    cout << "enter number " << endl;
    cin >> num;
    for (int i = 1; i < num + 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void floyd_triangle_row()
{
    int num, print = 1;
    cout << "enter number " << endl;
    cin >> num;
    for (int i = 1; i < num + 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << print++ << " ";
        }
        cout << endl;
    }
}
void floyd_triangle_number()
{
    int num, print = 1, exact, i = 1, cmp = 0;
    cout << "enter number " << endl;
    cin >> exact;
    while (i > 0)
    {
        cmp += i;
        if (cmp >= exact)
        {
            num = i;
            break;
        }
        i++;
    }
    for (int i = 1; i < num + 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << print++ << " ";
        }
        cout << endl;
    }
}
void butterfly()
{
    int num;
    cout << "enter number " << endl;
    cin >> num;
    for (int i = 1; i < num + 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < 2 * (num - i); j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < 2 * (i); j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < num - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void inverted_half_pyramid_numbers()
{
    int num;
    cout << "enter number " << endl;
    cin >> num;
    for (int i = num; i > 0; i--)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void zero_one()
{
    int num;
    cout << "enter number " << endl;
    cin >> num;
    for (int i = 1; i < num + 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (((i + j) % 2) == 0)
            {
                cout << "0 ";
            }
            else
            {
                cout << "1 ";
            }
        }
        cout << endl;
    }
}
void parallelogram()
{
    int num;
    cout << "enter number " << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < num; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void close_packed_numbers()
{
    int num, print = 1;
    cout << "enter number " << endl;
    cin >> num;
    for (int i = num; i > 0; i--)
    {
        for (int j = 1; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < num - i + 1; j++)
        {
            cout << print++ << "   ";
        }
        cout << endl;
        print = 1;
    }
}
void palindrome_number_pyramid()
{
    int num;
    cout << "enter number " << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << i + 1 - j << " ";
        }
        cout << 1 << " ";
        for (int j = 0; j < i; j++)
        {
            cout << j + 2 << " ";
        }
        cout << endl;
    }
}
void rhombus()
{
    int num;
    cout << "enter number " << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 1; j < num - i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = num - 1; i >= 0; i--)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void zig_zag()
{
    int num, n = 0, s = 0, t = 1;
    cout << "enter number " << endl;
    cin >> num;
    if (num == 0)
    {
        cout << "wrong input " << endl;
    }
    while (true)
    {
        if (num < 4 * n + 3)
        {
            break;
        }
        n++;
    }

    cout << "    ";
    for (int j = 0; j < n; j++)
    {
        cout << "* "
             << "      ";
    }
    cout << endl;
    cout << "  ";
    if (num >= (4 * (n - 1) + 3) + 1)
    {
        if (num == (4 * (n - 1) + 3) + 3)
        {
            s = 2 * n + 1;
        }
        else
        {
            s = 2 * n;
        }
    }
    else
    {
        s = 2 * (n - 1) + 1;
    }

    for (int i = 0; i < s; i++)
    {
        cout << "*   ";
    }
    cout << endl;
    if (num >= (4 * (n - 1) + 3) + 2)
    {
        t = n + 1;
    }
    else
    {
        t = n;
    }
    for (int i = 0; i < t; i++)
    {
        cout << "*       ";
    }
}
int fact(int num)
{
    int factorial = 1;
    for (int i = 2; i <= num; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int binary_coeff(int n, int r)
{
    return ((fact(n)) / (fact(r) * fact(n - r)));
}
void pascals_triangle()
{
    int n;
    cout << "enter number of rows " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << binary_coeff(i, j) << " ";
        }
        cout <<endl;
    }
}
int main()
{
    //rectangle_pattern();
    //hollow_rectangle();
    //inverted_half_pyramid();
    //half_pyramid();
    //half_pyramid_number();
    //floyd_triangle_row();
    //floyd_triangle_number();
    //butterfly();
    //inverted_half_pyramid_numbers();
    //zero_one();
    //parallelogram();
    //close_packed_numbers();
    //palindrome_number_pyramid();
    ///rhombus();
    //zig_zag();
    //pascals_triangle();
    return 0;
}