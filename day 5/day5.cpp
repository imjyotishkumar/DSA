#include<iostream>
using namespace std;



prime_number()
{
    int a,i,c=0;
    cout<<"Enter a number"<<endl;
    cin>> a;

    for(i=2;i<a;i++){
        if(a%i==0){
            c=1;
            break;

        }
    }
    if(c==0){
        cout<<a<<" is prime number"<<endl;
    }else{
    cout<<a<<" is not prime number"<<endl;
    }

}
fibonacci_series()
{
    int enter_number;
    cout<<"Enter a Number "<<endl;
    cin>>enter_number;

    int a=0,b=1,c,i;
    printf("%d %d",a,b);
    for(i=2;i<enter_number;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf(" %d",c);
    }
}

int main()
{
    //fibonacci_series();

    prime_number();


    return 0;

}
