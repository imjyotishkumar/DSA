#include<iostream>
using namespace std;


void funcInt(){
    int *ptr=new int;
    *ptr=5;
    cout<<*ptr;
    delete ptr;
}
void func(){
  int size;
  cin>>size;
  int x=1;
  int *ptr=new int[size];
  for(int i=0;i<size;i++){
    ptr[i]=x;
    x++;
  }
  cout<<endl;
  delete [] ptr; //free space
}
int main(){
// func();
funcInt();
    return 0;
}