#include<iostream>
#include<vector>
#include<stack>
#include<list>
using namespace std;

int PAB(stack<int>&stack , int val){
    if (stack.empty())
    {
        stack.push(val);
        return -1;
    }
    

    int temp = stack.top();
     stack.pop();
     PAB(stack,val);
     stack.push(temp);
}

int main(){

    stack<int>s;
    s.push(4);
    s.push(3);
    s.push(2);
    PAB(s,5
    
    );

    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    

    return 0;
}