#include<iostream>
#include<string>
#include<queue>
using namespace std;

void interLeave(queue<int> &q){
    int n = q.size();
    queue<int>first;
    for(int i = 0; i<n/2; i++){
        first.push(q.front());
        q.pop();
    }

    while (!first.empty())
    {
          q.push(first.front());
          first.pop();

          q.push(q.front());
          q.pop();
    }
    
}

int main(){

queue<int>q;
for(int i = 1; i<=10; i++){
    q.push(i);
}

interLeave(q);

while (!q.empty())
{
    cout<<q.front()<<" ";
    q.pop();
}





    return 0;
}