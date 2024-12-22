#include<iostream>
#include<string>
using namespace std;

class Animal{

public:
string color;
void eat(){
    cout<<"eat\n";
}
void breath(){
    cout<<"breath\n";
}

};

class fish:public Animal{
public:
string finsh;

void swim(){
    eat();
    cout<<"swim\n";
}

};

int main(){

    fish f1;
    f1.finsh=3;
    cout<<f1.finsh<<endl;
    f1.swim();
    f1.breath();
    f1.eat();

    return 0;
}
