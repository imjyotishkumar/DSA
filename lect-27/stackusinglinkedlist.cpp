#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;

template<class T>
class stack{
      list<T>ll;
public:
      void push(T val){
        ll.push_front(val);
      }      

      void pop(){
        ll.pop_front();
      }

      T top(){
        return ll.front();
      }

      bool isEmpty(){
        return ll.size() == 0;
      }

};

int main(){
stack<int>likl;
likl.push(4);
likl.push(3);
likl.push(2);
likl.push(1);
likl.push(0);

while (!likl.isEmpty())
{
    cout<<likl.top()<<" ";
    likl.pop();
}


    return 0;
}