#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void nextGreaterElement( vector<int> arr, vector<int> ans) {

    stack<int> s;
    int idx = arr.size() - 1 ;
    ans[idx] = -1;
    s.push(arr[idx]);

    for( idx = idx - 1; idx >= 0; idx-- ) {
        int curr = arr[idx];
        
        while( !s.empty() && curr >= s.top() ) {
            s.pop();
        }

        if( s.empty() ) {
            ans[idx] = -1;
        } else {
            ans[idx] = s.top();
        }

        s.push(curr);
    }

    for(int i = 0; i < ans.size(); i++ ) {
        cout << ans[i] << " ";
    }
 }

int main() {

vector<int> arr = {6,8,0,1,3};
vector<int> ans(arr.size());

nextGreaterElement( arr , ans );

return 0;

}