#include <iostream>
#include <vector>
#include <string>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int partition(int arr[], int si, int ei)
{
    int i = si - 1;
    int pivot = arr[ei];
    for (int j = si; j < ei; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[ei]);

    return i;
}

void quickSort(int arr[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }

    int pivtIdx = partition(arr, si, ei);
    quickSort(arr, si, pivtIdx - 1);
    quickSort(arr, pivtIdx + 1, ei);
}

int main()
{
    int arr[6] = {4, 5, 3, 56, 2, 6};
    int n = 6;

    quickSort(arr, 0, n - 1);
    print(arr, n);

    return 0;
}