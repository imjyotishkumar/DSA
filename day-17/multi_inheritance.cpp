#include<iostream>
#include<string>
using namespace std;

class Animal{
public:
void breath(){
    cout<<"breath\n";
}
void eat(){
    cout<<"eat\n";
}

};

class mammels:public Animal{
 public:
string bloodType;

mammels(){
    cout<<"blood type = warm"<<endl;
}


};

class dog:public mammels{

public:
void tailbag(){
    cout<<"tailbag"<<endl;
}

};

int main(){
 dog dog1;
 dog1.breath();
 dog1.bloodType="red";
    return 0;
}