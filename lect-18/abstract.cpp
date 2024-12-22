#include<iostream>
using namespace std;

class Shape {

    public:
       virtual void draw() = 0;

};

class Square: public Shape {

public:
void draw() {
    cout<<"square has drawn\n";
}

};

class circle: public Square {

public:
void draw() {

    cout<<"circle has drawn\n";
}


};

int main(){

Square s1;
circle c1;
c1.draw();
s1.draw();

    return 0;
}