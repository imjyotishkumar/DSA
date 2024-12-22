#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void maxareaHistogram(vector<int>height) {

    int n = height.size();
    vector<int>nextsmallerleft(n);
    vector<int>nextsmallerright(n);
    stack<int>s;

    //next smaallerleft
    nextsmallerleft[0] = -1;
    s.push(0);
    for(int i =0; i<n;i++){
        int curr = height[i];
        while(!s.empty() && curr <= height[s.top()]) {
            s.pop();
        }
        if(s.empty()){
            nextsmallerleft[i] = -1;
        } else{
            nextsmallerleft[i] = s.top();
        }
        s.push(i);
    }

     while(!s.empty()){
        s.pop();
     }
    //next smaller right
    
    s.push(n-1);
     nextsmallerright[n-1] = n;
     for (int i = n-1; i >= 0; i--)
     {
        int curr = height[i];
        while(!s.empty() && curr <= height[s.top()]){
            s.pop();
        }
        if(s.empty()){
            nextsmallerright[i] = n;
        } else {
            nextsmallerright[i] = s.top();
        }
        s.push(i);
     }
     
     // calculate area 
      int maxarea = 0;
     for (int i = 0; i < n; i++)
     {
        int ht = height[i];
        int width = nextsmallerright[i] - nextsmallerleft[i] -1;
        int area = ht*width;

        maxarea = max(area, maxarea);
     }

     cout << "maximum area of histogram is: " << maxarea << endl;
     

}

int main() {
vector<int>height ={2,1,5,6,2,3};
maxareaHistogram(height);
    return 0;
}