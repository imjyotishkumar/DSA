#include<iostream>
using namespace std;

int maxsubsum(int *arr,int n){
         int maxsum=INT8_MIN;

for(int st=0;st<n;st++){

    for(int end=st;end<n;end++){
         int currsum=0;
        for(int i=st;i<end;i++){
            currsum=currsum+arr[i];
        }
         cout<<currsum<<",";
        maxsum=max(maxsum,currsum);
    }
    cout<<endl;
}
cout<<maxsum;

}

int main(){

int arr[7]={1,-2,3,4,-5,6,7};
int n=sizeof(arr)/sizeof(int);
maxsubsum(arr,n);
    return 0;
}