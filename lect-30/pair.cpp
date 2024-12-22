#include<iostream>
#include<vector>
using namespace std;

bool compare(pair<int, int>p1, pair<int, int>p2){
    return p1.second < p2.second // ascending - end;
    // return p1.second > p2.second // descending - end;
    // return p1.second < p2.first // ascending - start;
    // return p1.second > p2.first
     // descending  - start;

}

int main(){

    vector<int>start = {0,1,3};
    vector<int>end = {9,2,4};

    vector<pair<int, int>> activity(3,make_pair(0,0));
    activity[0] = make_pair(0,9);
    activity[1] = make_pair(1,2);
    activity[2] = make_pair(3,4);

     for(int i = 0; i<activity.size(); i++){
        cout<<"Activity is A"<<i<<": "<< activity[i].first << "," << activity[i].second <<" "<<endl;
     }

     sort(activity.begin(), activity.end(),compare);


    return 0;
}