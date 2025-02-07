#include<iostream>
#include<string>
#include<vector>
using namespace std;

class perm{

public:
 
    void permutation(string str, string ans){
        //find size of str
        int n = str.size();

        //base case
        if( n == 0 ){
            cout << ans << "\n";
            return;
        }

        // delete str and call recursive function
        for (int i = 0; i < n; i++) 
        {
            char ch = str[i];
            string nextstr = str.substr( 0 , i ) + str.substr( i+1 , n-i-1 );
            permutation( nextstr , ans + ch );
        }
        
    }

};

int main(){
string str = "abc";
string ans = "";

perm p1;

p1.permutation(str, ans);

    return 0;
}