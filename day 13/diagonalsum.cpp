#include<iostream>
using namespace std;

//tc o(n^2)
int diagonalSum(int mat[][4],int n,int m){
    int sum =0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
       if(i==j){
       sum=sum+mat[i][j];
       } else if(j==n-i-1){
        sum=sum+mat[i][j];
       }

    }
}
cout<<"sum is: "<<sum<<endl;
return sum;

}

//tc o(n)
int diagonalsum1(int mat[][4],int n,int m){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+mat[i][i];
        if(i!=n-i-1){
            sum=sum+mat[i][n-i-1];
        }
    }
    cout<<"sum is: "<<sum;
    return sum;
}


int main(){

int mat[4][4]={{1,2,3,4},
               {5,6,7,8},
               {9,10,11,12},
               {13,14,15,16}};
int n=4;
int m=4;     
diagonalsum1(mat,n,m);          

    return 0;
}