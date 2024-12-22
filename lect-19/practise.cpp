#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int> arr, int n, int i) {
    if(i==n-1){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
   return isSorted(arr, n-1, i);
}

int main() {

     vector<int>arr={1,2,3,4,9,6,7};
     int n= arr.size();cout<<n;
   cout<< isSorted(arr, n, 0);

    return 0;
}