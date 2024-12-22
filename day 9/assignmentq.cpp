#include<iostream>
using namespace std;

void question_1(){
int x;
int *ptr;
x=7;
ptr=&x;
cout<<*ptr;
}

void question_2(int &a,int &b,int &c){
    a*=2;
    b*=2;
    c*=2;

}
int main(){
// question_1();
// int x=1,y=2,z=3;
// question_2(x,y,z);
// cout<<x <<y <<z <<"\n";

int a=33;
char ch='A';
char &cho=ch;
cho+=a;
cout<<a<<cho<<ch<<endl;;
// cout<<&cho;
    return 0;
}