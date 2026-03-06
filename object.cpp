#include <iostream>
using namespace std;

class Car {
public:
    string color;
    string model;

    void drive() {
        cout << color <<" " << model << " is driving." << endl;
    }
};

int main() {
    Car car1;   // object 1
    Car car2;   // object 2

    car1.color = "Red";
    car1.model = "Honda";

    car2.color = "Blue";
    car2.model = "Toyota";

    car1.drive();   // Honda is driving
    car2.drive();   // Toyota is driving

    return 0;
}