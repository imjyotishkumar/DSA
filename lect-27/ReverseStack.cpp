#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<stack>
using namespace std;

void PushAtBottom(stack<int>&s, int val)
{
    if (s.empty())
    {
        s.push(val);
        return;
    }

    int temp = s.top();
    s.pop();
    
    PushAtBottom(s,val);
    s.push(temp);

    
}
void reverseStack(stack<int>&s){

    if (s.empty())
    {
        return;
    }
    
    int temp = s.top();
    s.pop();
    reverseStack(s);
    PushAtBottom(s,temp);
}
void printstack(stack<int>s){
while (!s.empty())
{
    cout<<s.top()<<" ";
    s.pop();

}
cout<<"\n";
}

int main() {
stack<int>st;
st.push(4); 
st.push(3); 
st.push(2); 
st.push(1); 

printstack(st);
reverseStack(st);

printstack(st);


    return 0;
}