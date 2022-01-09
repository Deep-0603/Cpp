#include <iostream>
#include <climits>
using namespace std ;

void max_till_value(int *array,int size)
{
    //time complexity is O(n)
    int high = array[0];
    cout << array[0] <<" ";
    for (int i = 1; i < size; i++)
    {
        high = max(high,array[i]);
        cout <<high <<" ";
    }
}
void sum_subarrays(int *arr,int n)
{
    int end , sum = 0;
    for (int i = 0; i < n; i++)
    {
        end = i + 1;
        while (end <= n)
        {
            cout <<"ARRAY -->  ";
            for (int j = i; j < end; j++)
            {
                cout <<arr[j] <<" ";
                sum += arr[j];
            }
            cout <<"        SUM --> " <<sum <<endl;
            end ++;
            sum =0;
        }
    }
} 
void longest_arithmetic_subarray(int *arr,int n)
{
    // time complexity is O(n)
    int count = 1,mx = 1;
    int diff;
    int diffp = arr[1] - arr[0];
    for (int i = 2; i < n; i++)
    {
        diff = arr[i] - arr[i-1];
        if (diff == diffp)
        {
            count++;
        }
        else
        {
            count = 1;
        }
        mx = max(count,mx);
        diffp = diff;
    }
    if (mx != 1)
    {
        mx++;
    }
    cout << "maximum arithmetic subarray length is " <<mx ;
}
void record_breakers(int *arr,int n)
{
    // time complexity is O(n2)
    int count = 0,mx = arr[0];
    if (arr[1] < mx)
    {
        count++;
    }
    else
    {
        mx = arr[1];
        if (arr[1] > arr[2])
        {
            count++;
        }
    }
    for (int i = 2; i < n-1; i++)
    {
        if (arr[i] > mx && arr[i] > arr[i+1])
        {
            count ++;
            mx = arr[i];
        }
    }
    if (arr[n-1] > mx)
    {
        count ++;
    }
    cout <<"total record breaking days are " <<count;
}
void first_repeat(int *arr,int n)
{
    // time complexity is O(n2)
    int id = INT_MAX;
    int mx = arr[0];
    for (int i = 1; i < n; i++)
    {
        mx = max(mx,arr[i]);
    }
    int ptr[mx];
    for (int i = 0; i < mx+1; i++)
    {
        ptr[i] = -1;
    }
    
    for (int i = 0; i < n; i++)
    {
        if(ptr[(arr[i])] != -1)
        {
            id = min(id,ptr[arr[i]]);
            if (ptr[arr[i]] == 0)
            {
                break;
            }
        }
        else
        {
            ptr[(arr[i])] = i;
        }
    }
    if (id == INT_MAX)
    {
        cout <<"No repeating value is present " <<endl;
    }
    else
    {
        cout<<"First repeating value is at index no.  "
            <<id <<endl;
    }
}
void subarray_sum(int *arr,int n)
{
    // time complexity is O(n**2)
    cout <<"Enter required sum " ;
    int S;
    cin >> S;
    int start = 0,sum = 0,end;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == S)
        {
            end = i;
            break;
        }
        while (sum > S)
        {
            sum -= arr[start];
            start++;
            if (sum == S)
            {
                end = i;
                break;
            }
        }
    }
    for (int i = start; i < end + 1; i++)
    {
        cout <<arr[i] <<" ";
    }
}
void smallest_missing(int *arr,int n)
{
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx,arr[i]);
    }
    int ptr[mx];
    for (int i = 0; i < mx+1; i++)
    {
        ptr[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            ptr[arr[i]] = 1;
        }
    }
    for (int i = 1; i < mx+1; i++)
    {
        if (ptr[i] == 1)
        {
            continue;
        }
        else
        {
            cout<<"smallest missing integer is  "
                << i <<endl;
            break;
        }
    }
}
void Kadanes_Algorithm(int *arr,int n)
{
    int maxsum = 0;
    int currentsum = 0;
    for (int i = 0;i < n;i++ )
    {
        currentsum += arr[i];
        if (currentsum < 0)
        {
            currentsum = 0;
        }
        maxsum = max(maxsum,currentsum);
    }
    cout<<"Maximum possible sum of a subarray is "
        <<maxsum;
}
void Maximum_Circular_Subarray(int *arr,int n)
{
    int i=0 , maxsum = INT_MIN, e=1;
    int currsum = arr[i];
    while (currsum < 0)
    {
        i++;
        e++;
        currsum = arr[i];
    }
    while( i != e )
    {
        currsum += arr[e];
        if (e == n-1)
        {
            e = 0;
        }
        else
        {
            e++;
        }
        if (currsum < 0)
        {
            currsum = arr[e];
            i = e;
            if (e == n-1)
            {
                e = 0;
            }
            else
            {
                e = i + 1;
            }
        }
        maxsum = max(currsum,maxsum);
    }
    cout <<"Maximum possible sum of an array is "
        << maxsum;
}
void Pair_sum_check_unsorted(int *arr,int n)
{
    int sum,ans = 0;
    cout <<"Enter the total sum ";
    cin >> sum;
    int index[sum+1];
    for (int i = 0; i <= sum; i++)
    {
        index[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > sum)
        {
            continue ;
        }
        if (index[arr[i]] == 0)
        {
            index[arr[i]] = 1 ;
            index[sum - arr[i]] = 2 ;
        }
        else if (index[arr[i]] == 1)
        {
            continue; 
        }
        else if (index[arr[i]] == 2)
        {
            ans = 1;
            break;
        }
    }
    switch (ans)
    {
    case 1:
        cout <<"True";
        break;
    case 0:
        cout <<"False";
        break;
    default:
        cout <<"Error in the code";
    }
}
void Pair_sum_check_sorted(int *arr,int n)
{
    int low =0,high = n-1,sum;
    cout <<" Required sum is " <<endl;
    cin >> sum;
    while(low < high)
    {
        if (arr[low] + arr[high] == sum)
        {
            cout << low <<" , " << high <<endl;
            cout << "true";
            break;
        }
        else if(arr[low] + arr[high] < sum )
        {
            low ++;
        }
        else
        {
            high--;
        }
    }
}
/*
int *make_array()
{
    int size;
    cout<<"enter size\n";
    cin>>size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    return array;
}
int **make_2D_array()
{
    int r,c ;
    cout<<"enter number of rows and columns\n";
    cin>>r >>c ;
    int array[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> array[i][j] ; 
        }
    }
    return array;
}
int ***make_3D_array()
{
    int f,s,t;
    cin >>f >>s >>t;
    int array[f][s][t];
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < s; j++)
        {
            for (int k = 0; k < t; k++)
            {
                cin >> array[i][j][k];
            }
            
        }
        
    }
    return array;
}
*/
int main(){
    int size;
    cout <<"enter size and values " ;
    cin >>size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    //max_till_value(arr,size); 
    //sum_subarrays(arr,size);
    //longest_arithmetic_subarray(arr,size); 
    //record_breakers(arr,size);
    //first_repeat(arr,size);
    //subarray_sum(arr,size);
    //smallest_missing(arr,size);
    //Kadanes_Algorithm(arr,size);
    //Maximum_Circular_Subarray(arr,size);
    //----( negative array selection method will use.)
    //Pair_sum_check_unsorted(arr,size);
    //Pair_sum_check_sorted(arr,size);
    return 0; 
}