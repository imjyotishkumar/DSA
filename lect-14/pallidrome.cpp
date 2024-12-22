#include<iostream>
#include<string>
using namespace std;

bool ispall(char str[],int n){
int st=0, end=n-1;
while (st<end)
{
    if(str[st++]!=str[end--]){
      cout<<"not pallindrome\n";
      return false;
    }
}
cout<<"valid pallindrome";
return true;

}
int main(){
char str[]="racecar";
int n;
for( n=0;n<str[n];n++);
ispall(str,n);
    return 0;
}