//sor this array in descendiong order. ch[]={'f,'b,'a,'e,'c,'d}

#include<iostream>
using namespace std;

void descending(int arr[],int n){

for(int i=1;i<n;i++){
int curr=arr[i];
int prev=i-1;
while(prev>=0&&arr[prev]>curr){
    swap(arr[prev],arr[prev+1]);
    prev--;

}
arr[prev+1]=curr;

}
for(int i=0;i<n;i++){
    cout<<char(arr[i])<<" ";
}
}
int main(){
char ch[]={'f','b','a','e','c','d'};
int n=sizeof(ch)/sizeof(int);
// descending(ch,n);


    return 0;
}