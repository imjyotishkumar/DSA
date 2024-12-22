#include<iostream>
#include<string>
#include<deque>
using namespace std;

int main(){

     deque<int>deq;

     deq.push_front(4);
     deq.push_front(3);
     deq.push_front(2);
     deq.push_back(9);
     deq.push_back(8);

     cout<<deq.front();
     deq.pop_front();
     cout<<deq.front();

    return 0;
}