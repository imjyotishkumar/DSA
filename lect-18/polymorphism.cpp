//function overloading
#include<iostream>
#include<string>
using namespace std;

class print{

public:
void show(int val){
    cout<<"this is integer val: "<<val<<endl;
}
void show(string val){
    cout<<"this is string: "<<val<<endl;
}

};

int main(){
print obj;
obj.show(15);
obj.show("jyotish");

    return 0;
}