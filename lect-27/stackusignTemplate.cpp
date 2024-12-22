#include<iostream>
#include<vector>
#include<string>
using namespace std;

template<class T>
class stack{
      vector<T>vec;
public:
      void push(T val){
        vec.push_back(val);
      }

      void pop(){ 
          if (isEmpty())
        {
            cout<<"this is empty stack"<<endl;
            return;
        }
                vec.pop_back();
      }
      T top(){
        // if (isEmpty())
        // {
        //     cout<<"this is empty stack"<<endl;
        //     return;
        // }
        
       int temp = vec.size()-1;
       return vec[temp];
      }

      bool isEmpty(){
        if (vec.size()== 0)
        {
            return true;
        }
        return false;
        
      }


};

int main(){

stack<int> s;
stack<string> str;
s.push(3);
s.push(2);
s.push(1);
str.push("yadav");
str.push("kumar");
str.push("this is jyotish"
);

while (!s.isEmpty())
{
     cout<<s.top()<<" ";
     cout<<str.top()<<" ";
     str.pop();
     s.pop();
}

    return 0;
}