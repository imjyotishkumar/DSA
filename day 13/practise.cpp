#include<iostream>
using namespace std;

void diagonalSum(int arr[][4],int n,int m){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i][i];
        if(i!=n-i-1){
            sum=sum+arr[i][n-i-1];
        }
    }
    cout<<"sum is"<<sum;
}
int main(){
int arr[4][4];
int n=4,m=4;
cout<<"enter 2d matrix 4x4: "<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
diagonalSum(arr,n,m);
    return 0;
}