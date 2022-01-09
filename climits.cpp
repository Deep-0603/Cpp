#include <iostream>
#include <climits>
using namespace std ;

int main(){
    int min_no = INT_MAX;
    int max_no = INT_MIN;
    cout <<"no of entries " ;
    int n;
    cin >>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        max_no = max(max_no,arr[i]);
        min_no = min(min_no,arr[i]);
    }
    
    cout << "MAX NUMBER IS "<<max_no <<endl;
    cout << "MIN NUMBER IS "<<min_no <<endl;
    return 0 ;
}