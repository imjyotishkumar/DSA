#include<iostream>
using namespace std;

void printsubarray(int *arr,int n){

for(int start=0;start<n;start++)
{

for(int end=start;end<n;end++){
    for(int i=start;i<=end;i++){
     cout<<arr[i];
    }
    cout<<",";
}
cout<<endl;
}
}

int binarySearch(int *arr,int n,int key){
int st=0, end=n-1;
while (st<=end)
{
    int mid=(st+end)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
        st=mid+1;
    }
    else{
        end=mid-1;
    }
}
return -1;


}

int main(){
int arr[6]={1,2,3,4,5,6};
int n=sizeof(arr)/sizeof(int);

printsubarray(arr,n);
cout<<binarySearch(arr,n,5);
    return 0;
}