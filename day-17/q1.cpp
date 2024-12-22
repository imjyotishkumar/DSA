#include<iostream>
using namespace std;

class user{
string id;
string password;

public:
string username;
user(string id){
this->id=id;
}

//getter
string getid(){
    return id;
}

string getpass(){
    return password;
}
// setter
void setpass(string password){
    this->password=password;
}

};

int main(){
    user s1("101");
    s1.username="apnacollege";
    s1.setpass("abcd");

    cout<<"username  "<<s1.username<<endl;
    cout<<"password  "<<s1.getpass()<<endl;
    

    return 0;
}