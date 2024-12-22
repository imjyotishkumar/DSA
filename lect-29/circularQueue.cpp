#include<iostream>
using namespace std;

class queue{

      int* arr;

      int capacity;
      int currsize;

      int f,r;

public:
       
       queue(int capacity) {
        this->capacity = capacity;
        arr = new int[4];
       currsize = 0;
       f=0;
       r = -1;  

       }

       void push( int val ){
        
        if(currsize == capacity){
            cout<<"Array is full\n";
            return;
        }
        r = (r + 1) % capacity;
        arr[r] = val;
        currsize++;

       }

       void pop(){
        if(empty()){
            cout<< "Array is empty\n";
            return;

        }
        f = (f+1)%capacity;
        currsize--;

       }

       int front(){
        return arr[f];

       }

       bool empty(){
        return currsize == 0;

       }

};

int main(){

    queue q(4);

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

     cout<<q.front();
     q.pop();
     cout<<q.front();
     q.pop();
     q.push(6);
     cout<<q.front();
     q.pop();
     q.pop();
     q.pop();
     q.pop();
     q.push(9);
     cout<<q.front();

    return 0;
}