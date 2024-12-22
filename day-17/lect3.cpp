#include<iostream>
using namespace std;

class student{
int cgpa;
string name;
public:
//setters
void setName(string nameval){
    name=nameval;
}
void setcgpa(float cgpaval){
cgpa = cgpaval;
}

//getters
string getname(){
    return name;
}

float getcgpa(){
    return cgpa;
}

};
int main(){
student s1;
s1.setName("jyoitsh");
s1.setcgpa(9.2);

cout<<s1.getname()<<endl;
cout<<s1.getcgpa()<<endl;
    return 0;
}