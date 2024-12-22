#include<iostream>
using namespace std;

void demo(int a, int b=0){
    cout<<a<<""<<b;
}

int main(){

   int a = 5;
   int b = 15;

   demo(a);

    return 0;
}