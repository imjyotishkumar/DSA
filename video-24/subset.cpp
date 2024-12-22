#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printsubset(string str, string substr)
{
    if (str.size() == 0)
    {
        cout << substr<<endl;
        return;
    }

    char ch = str[0];
    // yes
    printsubset(str.substr(1, str.size() - 1), substr + ch);
    // no
    printsubset(str.substr(1, str.size() - 1), substr);
}

int main()
{

    string str = "abc";
    string substr = "";
    printsubset(str, substr);
    
    return 0;
}