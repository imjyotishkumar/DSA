
#include <iostream>
#include <string>
#include <cctype>  
using namespace std;

int main() {
    string myString = "Hello";
    for (int i = 0; i < myString.length(); i++) {
        if (isupper(myString[i])) {
            myString[i] = tolower(myString[i]);
        }
    }

cout<<myString<<endl;

    return 0;
}
