#include<iostream>
using namespace std;

void pointerbro(int *ptr){
    *ptr = 20;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;
}

int main(){
    int a = 10;
    pointerbro(&a);
    cout<<a<<endl;
    cout<<&a<<endl;

cout<<endl;
int c = 5;
int &d = c;
cout<<c<<d<<endl;
cout<<&d<<endl;
cout<<&c<<endl;

    return 0;
}