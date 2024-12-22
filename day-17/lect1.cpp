#include<iostream>
using namespace std;

class student{

    //properties
string name;
float cgpa;

//methods
void getpercentage(){
    cout<<(cgpa*10)<<"%\n";
}
};
class user{
int id;
string username;
string password;
string bio;
void deactivate(){
    cout<<"deleting account\n";
}
void editbio(string newbio){
bio=newbio;
}
};

int main(){
student s1; //object

student s2;
cout<<sizeof(s1);
    return 0;
}