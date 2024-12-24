#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    map<int,string> m;
    m[101] = "jyotish";
    m[110] = "neha";
    m[131] = "jyotish";

    cout << m[101] << endl;

    for(auto it: m) {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}
