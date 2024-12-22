#include<iostream>
using namespace std;

int main(){

int a;
int b;
char op;

cout<<"enter first value"<<endl;
cin<<a;
cout<<"enter second value"<<endl;
cin<<b;
cout<<"enter operator"<<endl;

switch(op){
case 1: a+b;
break;
case 2: a-b;
break;
case 3: a*b;
break;
case 4: a/b;
break;
}

return 0;
}
