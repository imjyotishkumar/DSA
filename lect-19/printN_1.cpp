#include<iostream>
using namespace std;

int decrease(int n) {

    if ( n == 0 ) {
        return 0;
    }
    
    cout<< n << endl;
     decrease(n-1);
}

int main() {

decrease(5);
    return 0;
}