#include<iostream>
#include<string>
#include<list>
#include<stack>
#include<vector>
using namespace std;

string reversestring(string str){
    string ans;
    stack<char>s;

    for (int i = 0; i < str.size(); i++)
    {
        s.push(str[i]);
    }


    while (!s.empty())
    {
        ans+= s.top();
        s.pop();
    
    }
    return ans;
}

int main(){
string str = "abcd";
cout<<reversestring(str);
    return 0;
}