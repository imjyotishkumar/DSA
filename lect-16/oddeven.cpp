#include<iostream>
using namespace std;

void oddoreven(int num){
    if (!(num&1)){
        cout<<"even\n";
    }
    else{
        cout<<"odd\n";
    }
}
int getIthBit(int num , int i){

    int bitMask=1<<i;
    if(!(num&bitMask)){
        return 0;
    } else{
return 1;
    }
}
int setIthBit(int num,int i){
    int bitMask=1<<i;
    return (num | bitMask);
}
int clearIthBIt(int num, int i){
    int bitmask=~(1<<i);
    return num & bitmask;
}
int countsetbit(int num){

    int count =0;
    while(num>0){
        int lastdig=num & 1;
        count+=lastdig;
        num=num>>1;
    }

    cout<<count<<endl;
    return count;
}
void fastexpo(int x, int n){
    int ans=1;
    while (n>0)
    {
        
    
    int lastbit = n&1;
    if(lastbit){
        ans=ans*x;
    }
    x=x*x;
    n=n>>1;
    }
    cout<<ans<<endl;
}
int main(){

oddoreven(12);
oddoreven(5);
cout<<getIthBit(6,2)<<endl;
cout<<setIthBit(6,3)<<endl;
cout<<clearIthBIt(6,1)<<endl;
cout<<countsetbit(10)<<endl;
fastexpo(3,4);

    return 0;
}