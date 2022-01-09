#include <iostream>
using namespace std;

int binary_search(int arr[], int k)
{
    // time complexity is O(log n / log 2) 
    int n = sizeof(arr);
    int i = n / 2, x = 0, y = n;

    if (arr[x] == k)
    {
        return x;
    }
    if (arr[y] == k)
    {
        return y;
    }

    while (x != i)
    {
        if (arr[i] == k)
        {
            return i;
        }
        else if (arr[i] > k)
        {
            y = i;
            i = (x + y) / 2;
        }
        else
        {
            x = i;
            i = (x + y) / 2;
        }
    }
    return -1;
}
int main()
{
    cout << "enter size of array ";
    int n;
    cin >> n;
    int array[n];
    cout <<"enter array values " <<endl ; 
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int key;
    cout << "enter key value ";
    cin >> key;
    cout << binary_search(array, key);
    return 0;
}