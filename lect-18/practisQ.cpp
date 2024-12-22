#include<iostream>
#include<string>
using namespace std;

class Parent {

    public:
    Parent() {

        cout << "this is parent constructor\n";
    }

    ~Parent() {

        cout << "this is parent destructor\n";
    }
};

class Child: public Parent {

    public: 
    Child() {

        cout << "this is child construtor\n";
    }
    ~Child() {

        cout << "this is child destructor\n";
    }
};

int main() {
Child c1;
    return 0;
}