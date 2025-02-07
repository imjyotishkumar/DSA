#include<iostream>
using namespace std;

int profitStock(int *price,int n){

int bestbuy[100000];
bestbuy[0]=INT8_MAX;
for(int i=1;i<n;i++){
    bestbuy[i]=min(bestbuy[i-1],price[i-1]);
}
int buy=bestbuy[0];
int pos=0;
for(int i=0;i<n;i++){
    if(bestbuy[i]<buy){
        buy=bestbuy[i];
        pos=i;
    }
}
cout<<"stock buy price= "<<buy<<endl;
cout<<"stock buy date= "<<pos<<"th day"<<endl;
int maxprofit=0;
int pos2=0;
int selprice=0;
for(int i=pos;i<n;i++){
    int currprofit=price[i]-buy;
    maxprofit=max(maxprofit,currprofit);

    if(maxprofit<currprofit){
            pos2=i;
    }
}
selprice=price[pos];
cout<<"stock sell price= "<<selprice<<endl;
cout<<"stock sell date= "<<pos2<<"th day"<<endl;
cout<<"maxprofit=" << maxprofit << endl;

}

int main(){

int price[]={2,44,67,32,34,1,46,78,73,98};
int n=sizeof(price)/sizeof(int);

profitStock(price,n);
cout<<endl;
cout<<sizeof(price)<<endl;
cout<<sizeof(int)<<endl;

    return 0;
}
