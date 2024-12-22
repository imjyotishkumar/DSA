// #include <iostream>
// #include <string>
// #include <stack>
// using namespace std;

// bool isValid(string str)
// {

//     stack<char> s;

//     for (int i = 0; i < str.size(); i++)
//     {
//         char ch = str[i];

//         if (ch == "(" || ch == "{" || ch == "[")
//         {
//             s.push(ch);
//         }
//         else
//         {
//             if (s.empty())
//             {
//                 return false;
//             }

//             int top = s.top();
//             if ((top == "(" && ch == ")") || 
//                 (top == "{" && ch == "}") || 
//                 (top == "[" && ch == "]") )
//             {
//                 s.pop();
//             }
//             else
//             {

//                 return false;
//             }
//         }
//     }
//     return s.empty();
// }

// int main()
// {

//     string str1 = "([{}])";
//     string str2 = "{(])}";

//     cout << isValid(str1) << endl;
//     cout << isValid(str2) << endl;

//     return 0;
// }




#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isValid(string str)
{

    stack<char> s;

    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];

        if ((int)ch == 40 || (int)ch == 91 || (int)ch == 123)
        {
            s.push(ch);
        }
        else
        {
            if (s.empty())
            {
                return false;
            }

            int top = s.top();
            if (((int)top == 40 && (int)ch == 41) || 
                ((int)top == 123 && (int)ch == 125) || 
                ((int)top == 91 && (int)ch == 93) )
            {
                s.pop();
            }
            else
            {

                return false;
            }
        }
    }
    return s.empty();
}

int main()
{

    string str1 = "([{}])";
    string str2 = "{(])}";

    cout<<(int)str1[0]<<endl;
    cout<<(int)str1[1]<<endl;
    cout<<(int)str1[2]<<endl;
    cout<<(int)str1[3]<<endl;
    cout<<(int)str1[4]<<endl;
    cout<<(int)str1[5]<<endl;
    cout<<(int)str1[6]<<endl;

    cout<<isValid(str1)<<endl;
    cout<<isValid(str2)<<endl;
    


   
    return 0;
}