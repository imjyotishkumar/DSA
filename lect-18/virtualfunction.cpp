#include<iostream>
using namespace std;

class parent {

    public:
    virtual void hello(){

        cout<< " this is parent " <<endl;
    }
};

class child:public parent {

public:
   void hello(){

    cout<<"this is child "<<endl;
   }

};

int main(){
child child1;
parent *ptr;
ptr=&child1;
ptr->hello();

    return 0;
}