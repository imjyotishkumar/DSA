#include<iostream>
#include<string>
#include<list>
#include<stack>
#include<vector>
using namespace std;



int main() {

stack<int>s;
s.push(0);
s.push(1);
s.push(2);
s.push(3);

while (!s.empty())
{
    cout<<s.top()<<" ";
    s.pop();
    
}


    return 0;
}