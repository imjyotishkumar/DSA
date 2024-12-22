#include<iostream>
using namespace std;

void selection_sort(int *arr,int n){

for(int i=0;i<n-1;i++){
    int minidx=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minidx]){
        minidx=j;
        }
    }
    swap(arr[i],arr[minidx]);
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}

int main(){

int arr[]={2,3,1,3,4,2,3,4,5};
int n=sizeof(arr)/sizeof(int);
selection_sort(arr,n);

    return 0;
}