#include<iostream>
using namespace std;

int main(){
int rows;
int cols;
cout<<"enter rows size: "<<endl;
cin>>rows;
cout<<"enter cols size: "<<endl;
cin>>cols;
int** matrix= new int*[rows];
int x=1;
for(int i=0;i<rows;i++){
    matrix[i]=new int[cols];
    
}
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        matrix[i][j]=x;
        x++;
        cout<<matrix[i][j]<<"  ";
    }
    cout<<endl;
}
cout<<*(*(matrix+2)+2);


    return 0;
}