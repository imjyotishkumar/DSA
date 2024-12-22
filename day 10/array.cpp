#include <iostream>
#include<string>
using namespace std;

// void prime(int n)
// {
//     int c = 0;

//     for (int i = 2; i < n - 1; i++)
//     {
//         if (n % i == 0)
//         {
//             c++;
//         }
//     }

//     if (c > 0)
//     {
//         ;
//     }
//     else
//     {

//         // cout<<"this is prime";
//         cout << n<<endl;
//         c--;
//     }
// }
int findmax(int arr[],int n){

    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
        return min, max; 
    
    }
}


void printArr(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<",";
}
}
void func1(int arr[],int n){
    arr[0]=1000;
    for(int i=0;i<n;i++){
        cout<< arr[i];
    }
}

int linearsearch(int arr[],int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        
        }
    }
    return -1;
}

void reversearray(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}

void indices(int arr[],int n,int target){
for(int i=0;i<n;i++){
    int j=i+1;
    if(arr[i]+arr[j]==target){
        cout<<"["<<i<<" "<<j<<"]";
    }
}
}


void lowerCase(string a){
 for(int i=0;i<a.length();i++){
    if(a[i]==islower(a[i])){
        a[i]=toupper(a[i]);
    }
            cout<<a[i];

 }

}

int main(){
//   int n; //this was for maxmimum
//   cout<<"enter length of array"<<endl;
//   cin>>n;
//     int arr[n];

    
//     cout<<"enter array value"<<endl;
//     for(int i=0;i<n;i++)
//     {
//       cin>>arr[i];
//     }
// cout<<findmax(arr, n)<<endl;  //this was also for maximum

// int arr[]={1,2,3,4,5};
// int n=sizeof(arr)/sizeof(int);
// printArr(arr,n); 

// int a=5;
// int *ptr=&a;
// cout<<ptr<<endl;
// int arr[]={1,2,3,4,5};
// int n=sizeof(arr)/sizeof(int);
// func1(arr,n);

// int arr[]={12,2,34,54,34,23,65,767,45};
// int n=sizeof(arr)/sizeof(int);
// cout<<linearsearch(arr,n,34);


// int arr[]={1,2,3,4,5,6,7,8,9};
// int n=sizeof(arr)/sizeof(int);
// int copyarr[n];
// for(int i=0;i<n;i++){

// int j=n-i-1;
// copyarr[i]=arr[j];
// }
// for(int i=0;i<n;i++){
//     arr[i]=copyarr[i];
// }
// int st=0, end=n-1;
// while(st<end){
//     int temp=arr[st];
//     arr[st]=arr[end];
//     arr[end]=temp;

//     st++;
//     end--;
// }

// reversearray(arr,n);



// int arr[]={10,7,3,12,5,6,7,8,9};
// int n=sizeof(arr)/sizeof(int);

// indices(arr,n,17);
string a="jyotish";
string b=toupper(a);
lowerCase(a);
    return 0;
}