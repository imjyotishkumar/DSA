#include<iostream>
#include<vector>
using namespace std;

class stack {
   vector<int> vec;
 public:
       void push(int val){
           vec.push_back(val);

       }  
       void pop(){
        if (isEmpty())
        {
            cout<<"stack is empty"<<endl;
            return;
        }
        
        vec.pop_back();
       }

       int top(){
        if (isEmpty())
        {
            cout<<" stack is empty "<<endl;
            return -1;
            
        }
        
        int lastval = vec.size()-1;
        return vec[lastval];
       }

       bool isEmpty(){
        if (vec.size() == 0)
        {
            return true;
        }
        return false;
        
       }
};

int main(){
stack s;
s.push(3);
s.push(2);
s.push(1);
s.push(0);

while (!s.isEmpty())
{
    cout<<s.top()<<" ";
    s.pop();
}



    return 0;
}