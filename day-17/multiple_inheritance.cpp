#include<iostream>
#include<string>
using namespace std;

class Teacher{
public:
int Salary;
string Subject;

};

class Student{
public:

int roll;
float cgpa;

};

class TA:public Teacher, public Student{

public:
string name;

};

int main(){

TA ta1;
ta1.name="jyotish";
ta1.Salary=20000;
ta1.cgpa=9.1;
ta1.Subject="math";
ta1.roll=121;

cout<<ta1.name<<endl;
cout<<ta1.Salary<<endl;
cout<<ta1.Subject<<endl;
cout<<ta1.roll<<endl;
cout<<ta1.cgpa<<endl;

    return 0;
}