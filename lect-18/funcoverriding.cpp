#include<iostream>
using namespace std;

class parent {

public:

void over(){
    cout<<"this is parent function";
}

};

class child:public parent {
public:
void over(){
    cout<<"this is child function";
}

};

int main(){

child child1;
child1.over();
    return 0;
}