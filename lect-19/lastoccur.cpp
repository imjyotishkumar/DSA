#include <iostream>
#include <vector>
using namespace std;

int lastOccur(vector<int> arr, int target, int i)
{

    if (i == arr.size())
    {
        return -1;
    }
    int idx = lastOccur(arr, target, i + 1);
    if (idx == -1 && arr[i] == target)
    {
        return i;
    }
    return idx;
}

int main()
{
    vector<int> arr = { 1,2,3,3,3,3,3,4,5,6,7};
    cout<< lastOccur(arr,3,0);

    return 0;
}