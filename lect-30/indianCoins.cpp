#include<iostream>
#include<vector>
using namespace std;

int getChange(vector<int>coins , int v) {

    int ans = 0;
    int n = coins.size();
    for(int i = n-1; i>0 && v>0; i--){
        if( v >= coins[i] ){
           ans += v/coins[i];
           v = v % coins[i];
        }
    }
    cout<<"minimum coins: " << ans;
    return ans;
}

int main() {
    
    vector<int> coins = {1,2,5,10,20,50,100,500,2000};
    int v = 1099;
     
     getChange(coins,v);

    return 0;
}