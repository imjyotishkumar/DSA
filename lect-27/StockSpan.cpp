#include<iostream>
#include<stack>
#include<list>
#include<vector>
using namespace std;

void stockSpanProblem(vector<int>stock,vector<int>span){

    stack<int>s;
    s.push(0);
    span[0] = 1;

    for (int i = 1; i < stock.size(); i++)
    {
        int currprice = stock[i];
        while (!s.empty() && currprice >= stock[s.top()])
        {
            s.pop();
        }

        if (s.empty())
        {
            span[i] = i + 1;
        } else{
            int prevhigh= s.top();
            span[i] = i-prevhigh;
        } 
       
    }

    for (int i = 0; i < span.size(); i++)
    {
         cout<<span[i]<<" ";  
    }
    cout<<endl;
    
    
}

int main(){
vector<int>stock = {100,80,60,70,60,85,100};
vector<int>span(7);

stockSpanProblem(stock,span);

    return 0;
}