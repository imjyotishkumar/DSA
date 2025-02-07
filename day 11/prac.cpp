#include<iostream>
using namespace std;

int profitstock(int prices[]){
    // int sell =0;
    // int purchase = arr[0];
    // int day;
    // int sellday;

    // for(int i = 0; i < n; i++){
    //     if(purchase>arr[i]){
    //         purchase = arr[i];
    //         day = i+1;
    //     }
    // }
    // cout<<"purchase price: "<<purchase<<endl;
    // cout<<"purchase day: "<<day<<endl;

    // for(int i = day-1; i < n; i++){
    //     if(sell<arr[i]){
    //         sell = arr[i];
    //         sellday= i+1;
    //     }
    // }
    // cout<<"sell price: " <<sell<<endl;
    // cout<<"sell day: "<< sellday<<endl;

    // cout<< "profit is: "<< sell - purchase << endl;
    
     int n = sizeof(prices)/sizeof(int);
        int purchase = prices[0];
        int day;
        int sell = 0;
        for(int i = 0; i<n; i++){
            if(purchase>prices[i]){
                purchase = prices[i];
                day = i+1;
            }
        }
         
        for(int i = day-1; i<n; i++){
            if(purchase<prices[i]){
                sell = prices[i];
            }
        } 

        cout<<sell - purchase << endl;
        return sell - purchase;
    }

int main(){
int arr[] = {432,53,64,241,64,421,3563,7465,8765,456,765,1};
int n = sizeof(arr)/sizeof(int);
profitstock(arr,n);

    return 0;
}