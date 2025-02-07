#include<iostream>
#include<vector>
using namespace std;

class Solution{

public:
      void BubbleSort(vector<int>& arr){
      int n= arr.size();
      
      for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){

            swap(arr[j],arr[j+1]);
            }
        }
      }
      for(int i=0;i<n;i++)
      {
        cout<<arr[i];
      }
      }

};

int main() {

Solution s1;
vector<int>arr={3,5,64,1};
s1.BubbleSort(arr);
    return 0;
}