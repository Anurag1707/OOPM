#include<iostream>
using namespace std;

class Animal{
    public:
     void makeSound(){
        cout<<"animal Sound";
    }
};

class Dog:public Animal{
    public:
    void makeSound(){
        cout<<"Bark"<<endl;
    }
};

int main(){
    Animal a; //static
    Dog d; //static
    Dog *pd =new Dog;
    pd->makeSound();
    // Animal *pa=new Animal;
    // pa->makeSound();
    Animal *pa=new Dog;
    pa->makeSound();

}

// Dynamic Polymorphism
                // runtime
