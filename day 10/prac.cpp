#include<iostream>
using namespace std;

int linearsearch(int arr[],int n, int k){

for (int i = 0; i < n; i++)
{
    if(arr[i] == k){
        cout<<"key found at the position "<<i<<endl;
        return i;
    }
}
return -1;
}

void printarr(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i];
    }
}

int reversearray(int arr[], int n){
    int copyarr[5];
    for(int i = 0; i<n; i++){
        int j = n-i-1;
        copyarr[i]= arr[j];
    }
    for(int i = 0; i<n; i++){
        arr[i] = copyarr[i];
    }
    printarr(arr,n);
}

void reversearraywithoutextraspace(int arr[], int n){
     int start = 0;
     int end = n-1;
     while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
     }
     printarr(arr, n);
}

int BinarySearch(int arr[], int n, int k){
    int st = 0; int end = n-1;
    while(st<=end){
        int mid = (st+end)/2;
        if(arr[mid]==k){
            return mid;
        } 
        else if(arr[mid]<k){
            st = mid +1;
        } else{
            end = mid -1;
        }
    }
    return -1;
}
int subarray(int arr[], int n){
    for(int start = 0; start<n; start++){
        for(int end = start; end<n; end++){
            for(int i = start; i<end; i++){
                cout<<arr[i];
            }
            cout<<"  ";
        }
        cout<<endl;
    }
}
int main(){

int arr[5]={2,3,4,2,5};
int arr2[5]={2,3,4,5,6};
int n = sizeof(arr)/sizeof(int);
int k = 5;
linearsearch(arr,n,k);
cout<<endl;

reversearray(arr,n);
cout<<endl;
reversearraywithoutextraspace(arr,n);
cout<<endl;
reversearraywithoutextraspace(arr,n);
cout<<endl;
cout<<BinarySearch(arr2,n,2)<<endl;
cout<<endl;
cout<<(0+3)/2<<endl;
subarray(arr,n);
    return 0;
}