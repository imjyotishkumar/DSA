#include<iostream>
#include<vector>
using namespace std;

int maxactivity(vector<int>start, vector<int>end){

    cout<<"selecting activity is: A0 \n";
    int count =1;
    int currEnd = end[0];

    for(int i = 1; i<start.size(); i++){
        if(start[i]>=currEnd){
             cout<<"selecting activity is: A"<<i<<endl;
            count++;
            currEnd = end[i];
           
        }
    }

    return count;
}

int main(){

vector<int>start = {1,3,0,5,8,5};
vector<int>end = {2,4,6,7,9,9};

cout<<maxactivity(start, end)<<" ";



    return 0;
}