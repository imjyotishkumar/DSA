#include <iostream>
using namespace std;

class Car
{

    string name;
    string color;

public:
Car(){
   cout<<" construcor without parameter";
}
    Car(string name,string color){
    cout<<"constructor is called object being created..\n";
    this->name=name;
    this->color=color;
}

    void start()
    {
        cout << "car has started" << endl;
    }
    void stop()
    {

        cout << "car has stopped" << endl;
    }

    //geeter
    string getname(){
    return name;
    }
    string getcolor(){
    return color;
    }
};

int main()
{
    Car c0;

    Car c1("maruti 899","white");
    cout<<"car name"<<c1.getname()<<endl;;
    cout<<"car color"<<c1.getcolor();
    return 0;
}
