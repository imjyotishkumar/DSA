#include <iostream>
using namespace std;

void function()
{

    static int i = 0;
    i++;
    cout << "the value of i is " << i << endl;
}

class counter
{

public:
    static int x;
};

class example
{

public:
    example()
    {
        cout << "this is constructor\n";
    }

    ~example()
    {
        cout << "this is destructor\n";
    }
};

int counter::x = 0;

int main()
{

    int eg = 0;
    if (eg == 0)
    {
        static example eg2;
    }
    cout << "code ending...";

    return 0;
}