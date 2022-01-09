#include <iostream>
using namespace std ;

int main(){
    int n,pos = 0;
    cout << "How many numbers you want to compare." <<endl;
    cin >> n;
    int arr[n];
    cout << "Start entering numbers" <<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }
    int cmp = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > cmp)
        {
            cmp = arr[i];
            pos = i+1;
        }
    }
    cout<<"largest among these is " <<cmp 
         <<" at position number "<<pos <<endl;
    
    return 0 ;
}