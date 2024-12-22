#include <iostream>
#include<string>
using namespace std;

class complex
{
    int real;
    int img;

public:
    complex(int r, int i)
    {
        real = r;
        img = i;
    }

    void shownum()
    {
        cout << real << " + " << img <<"i"<< endl;
    }

    complex operator +(complex &c2){

        int resReal = this->real + c2.real;
        int resImg = this->img + c2.img; 
        complex c3(resReal, resImg);
        return c3;

    }
};

int main()
{
    complex c1(1, 2);
    complex c2(3, 4);
    complex c4(4, 5);
    complex c5(6, 7);
    complex c6 = c4 + c5 + c2;
      
    c1.shownum();
    c2.shownum();

    complex c3 = c1 + c2 ;
    c3.shownum();
    c6.shownum();

    return 0;
}