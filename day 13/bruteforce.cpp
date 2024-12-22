#include<iostream>
using namespace std;

void bruteforce(int mat[][4],int n,int m, int key){
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==key){
                cout<<"("<<i<<","<<j<<")"<<endl;
                c=c+1;
                break;
            }
            
            
        }
    }
    if(c<0){
        cout<<"element has not found";
    }
    else{
        cout<<"element has found";
    }
}

int main(){
    int mat[4][4]={{10,20,30,40},
                    {15,25,35,45},
                    {27,29,37,48},
                    {32,33,39,50}};
    int n=4;
    int m=5;
bruteforce(mat,n,m,33);

    return 0;
}