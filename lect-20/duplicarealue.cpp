#include <iostream>
#include <string>
using namespace std;

void remdup(string str, string ans, int i, int map[])
{
    if (i == str.size())
    {
        cout << "ans: " << ans;
        return;
    }
    
    int mapIdx = (int)(str[i] - 'a');

    if(map[mapIdx]) {
        remdup(str,ans,i+1,map);
    } else {
        map[mapIdx]={true};
        remdup(str,ans+str[i],i+1,map);
    }
}

int main()
{
    string str = "aapnnacollege";
    string ans = " ";
    int map[26] = {false};
    remdup(str,ans,0,map);

    return 0;
}