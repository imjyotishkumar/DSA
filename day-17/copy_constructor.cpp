#include<iostream>
using namespace std;

class car{

    public:
    string name;
    string color;

    car(string name, string color){
        this->name=name;
        this->color=color;
    }
    car(car &original){
        cout<<"copying original to new...\n";
        name=original.name;
        color=original.color;
    }

};

int main(){
    car car1("maruti 800","white");
    car car2(car1);
    
cout<<car2.name<<endl;
cout<<car2.color<<endl;
    return 0;
}