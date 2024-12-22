#include<iostream>
#include<string>
using namespace std;


int friedsPairing(int n) {

    if(n==1 || n==2) {
        return n;
    }
    return friedsPairing(n-1) + (n-1) * friedsPairing(n-2);
}

int main() {
    cout<<friedsPairing(12);

    return 0;
}