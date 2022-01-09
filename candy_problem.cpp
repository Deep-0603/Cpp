#include<iostream>
using namespace std;

int main()
{
    int n,order = 0,can = 0;
    cout<<"Enter number of students : " ;
    cin >> n;
    int arr[n],score[n];
    cout <<"Enter ratings of these students " <<endl;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[i+1])
        {
            order = i + 1;
            break;
        }
        if (i = n-1)
        {
            order = n;
        } 
    }
    cout <<"order is " <<order <<endl;
    
    for (int i = 0; i < order; i++)
    {
        score[i] = order - i;
    }

    for (int i = order; i < n; i++)
    {
        if (arr[i] > arr[i-1])
        {
            score[i] = score[i-1] + 1;
        }
        else
        {
            score[i] = 1;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        can += score[i];
        cout <<score[i] <<endl;
    }
    
    cout <<"she has to buy " <<can <<" candies minimum" ;
    
    return 0;
}