#include <iostream>
#include <string>
using namespace std;

class A
{

    string str = "secret";
    friend class B;
};

class B
{

public:
    void showSceret(A &obj)
    {
        cout << obj.str << endl;
    }
};

void secretReveal() {

    
}

int main()
{
    A a1;
    B b1;
    b1.showSceret(a1);
    return 0;
}