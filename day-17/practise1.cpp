#include <iostream>
#include <string>
using namespace std;

class Car
{

    string name;
    string color;


public:
    int *milage;

    Car(string name, string color)
    {
         cout << "this os original contructor...\n";
         this->name = name;
         this->color = color;
         milage = new int;
        *milage = 12;
    }

    Car(Car &original)
    {
        cout << "this is copy constructor...\n";
        name = original.name;
        color = original.color;
        milage = new int;
        *milage = *original.milage;
    }

    string getname() {
        return name;
    }

    string getcolor() {

        return color;
    }

    
};

int main()
{

    Car car1("maruti 800" , "black");
    Car car2(car1);
    
      cout<< car2.getname() <<endl;
      cout << car2.getcolor() << endl;
      cout << *car2.milage << endl;
      *car2.milage= 10;
      cout<< *car2.milage<<endl;
      

        return 0;
}