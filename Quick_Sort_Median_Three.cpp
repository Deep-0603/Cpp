#include <bits/stdc++.h>
using namespace std ;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int medianOfThree(vector<int>& arr, int left, int right) {
    int middle = (left + right) / 2;

    if (arr[left] > arr[middle])
        swap(arr[left], arr[middle]);
    if (arr[left] > arr[right])
        swap(arr[left], arr[right]);
    if (arr[middle] > arr[right])
        swap(arr[middle], arr[right]);

    
    return middle;
}


int partition(vector<int>& arr, int left, int right) {
    int pivotIndex = medianOfThree(arr, left, right);
    int pivotValue = arr[pivotIndex];
    int i = left - 1;
    int j = right + 1;

    while (true) {
        do {
            i++;
        } while (arr[i] < pivotValue);

        do {
            j--;
        } while (arr[j] > pivotValue);

        if (i >= j)
            return j;

        swap(arr[i], arr[j]);
    }
}


void quickSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int partitionIndex = partition(arr, left, right);

        quickSort(arr, left, partitionIndex);
        quickSort(arr, partitionIndex + 1, right);
    }
}

int main() {
    vector<int> arr = {12, 4, 5, 6, 7, 3, 1, 15};
    int n = arr.size();

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << std::endl;

    return 0;
}
