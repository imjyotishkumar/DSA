#include <iostream>
using namespace std;

bool search(int arr[][4], int n, int m, int key)
{
    int i = 0;
    int j = m - 1;
    while (i < n && j >= 0)
    {
        if (arr[i][j] == key)
        {
            cout << "found at cell" << i << "," << j << endl;
        }
        else if (arr[i][j] > key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
}

int main()
{

    int arr[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};

    return 0;
}