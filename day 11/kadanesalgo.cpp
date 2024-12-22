#include<iostream>
using  namespace std;

int kadan(int *arr,int n){
int currsum=0;
int maxsum=INT8_MIN;
for(int i=0;i<=n;i++){
    currsum+=arr[i];
    maxsum=max(maxsum,currsum);
    if(currsum<0){
        currsum=0;
    }

}
return maxsum;

}

int main(){
int arr[5]={1,2,4,-5,67};
int n=5;

cout << kadan(arr,n);
    return 0;
}