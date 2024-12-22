#include<iostream>
#include<vector>
using namespace std;

int trap(vector<int> heights, int n){

    int leftmax[20000], rightmax[20000];
    rightmax[n-1] = heights[n-1];
    leftmax[0] = heights[0];
     
     for (int i =1; i<n; i++) {
        leftmax[i] = max(leftmax[i-1], heights[i]);
     }


     for(int i = n-2; i>=0; i--){
        rightmax[i] = max(rightmax[i+1], heights[i]);
     }
      
     int waterTrapped = 0;
     for(int i=0; i<n; i++) {
        int currwater = min(leftmax[i], rightmax[i]) - heights[i];
        if(currwater > 0) {
            waterTrapped += currwater;
        }
    return waterTrapped;
     } 
}


int main(){

vector<int> heights = {0,1,0,2,1,0,1,3,2,1,2,1};
int n = sizeof(heights);
cout<<n;

cout<<trap(heights, n); 

    return 0;
}