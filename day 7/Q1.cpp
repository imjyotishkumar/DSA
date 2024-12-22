
#include<iostream>
using namespace std;

bool prime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            return false;
        }

    }
    return true;
}
int r_prime(int range){
    for(int i=2;i<=range-1;i++){
    if(prime(i)==true){
        cout<<" "<<i;
    }
    if(i==range-2){
        cout<<" ";
        continue;
        
    }
    }
    
}
char aks(){
    char a[100];
    int age;
    printf("enter your name:\n");
    scanf("%[^\n]",a);

    printf("enter your age:\n ");
    scanf("%d",&age);


    printf("your name is: %s\n",a);
    printf("your age is: %d",age);


}

bool pallidrome(int n){
    int o=n;
    int r,s=0;
    while(n!=0){
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
  if(s==o){
    return true;
} else{
return false;
}   
}

int sum_of_digit(int n){
    int r,s=0;
    while(n!=0){
        r=n%10;
        n=n/10;
        s=s+r;
    }
    return s;

}

int q_3(int a,int b){
int s=(a*a)+(b*b)+(2*a*b);
return s;
}



int main(){

cout<<q_3(4,3);
//cout<<sum_of_digit(1234);
 //cout<<pallidrome(131);
//cout<<r_prime(31);
//aks();
    return 0;
}