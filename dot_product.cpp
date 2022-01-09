#include <iostream>
using namespace std;

template <class T>
class vector
{
    int size;

public:
    T *arr;
    setvector()
    {
        cout <<"CREATE NEW VECTOR " <<endl;
        cout <<"NUMBER OF DIMENSION " <<endl;
        cin >>size;
        arr = new T[size];

        cout <<"ENTER QUANTITIES " <<endl;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        cout<<"--------------VECTOR FORMED ------------ " 
            <<endl;
    }
    
    T dot_product(vector v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += (this->arr[i]) * (v.arr[i]);
        }

        return d;
    }
};

int main()
{
    vector <int> v1();
    v1.setvector();
    vector <int> v2();
    v2.setvector();

    cout<<"DOT product of above two vectors is : "
    <<v2.dot_product(v1);
    
    return 0;
}