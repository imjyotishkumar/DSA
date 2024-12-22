#include<iostream>
#include<string.h>
using namespace std;

char* reverse(char str[], int n){
    int st=0, end=n-1;
    while (st<end)
    {
         swap(str[st++],str[end--]);
    }
    return str;
    
}
int main(){
char str[]="jyotish";
int n;
for(n=0;n<str[n];n++);
cout<<"reverse is : "<<reverse(str,n);
    return 0;
}