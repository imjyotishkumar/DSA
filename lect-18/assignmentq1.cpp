#include<iostream>
#include<string>
using namespace std;

class complexNumber {

int real;
int imag;

public:
complexNumber(int r, int i) {
    real =r;
    imag = i;
}

void showNum() {
    cout << real << "+" << imag << "i" << endl;
}

complexNumber operator -(complexNumber &obj) {
int resreal = this->real - obj.real;
int resimag = this->imag - obj.imag;
complexNumber c3(resreal , resimag);
return c3;

}

};

int main() {
complexNumber c1(2,4);
complexNumber c2(1,2);
complexNumber c4(1,2);
c1.showNum();
c2.showNum();
complexNumber c3=c1-c2;
c3.showNum();
    return 0;
}