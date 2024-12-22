#include<iostream>
using namespace std;

void subarray(int *arr,int n){

    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){

            for(int i=st;i<end;i++){
                cout<<arr[i];
            }
            cout<<"  ";
        }
        cout<<endl;
    }

}

int main(){
int arr[7]={3,5,2,5,8,3,4};
int n= sizeof(arr)/sizeof(int);

subarray(arr,n);

    return 0;
}