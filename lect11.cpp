#include<iostream>
using namespace std;

class Animal{
    public:
    Animal(){
        cout<<"animal created"<<endl;
    }
   virtual void makeSound(){
        cout<<"Animal sound"<<" ";
    }
};

class Dog: public Animal{
    public:
    Dog(){
        cout<<"Dog created"<<endl;
    }
    void makeSound(){
        cout<<"Bark!!!"<<" ";
    }
};

class Cat: public Animal{
    public:
    Cat(){
        cout<<"cat created"<<endl;
    }
    void makeSound(){
        cout<<"meow"<<endl;
    }
};

int main(){
    // Animal *a= new Dog;
    // Animal *b= new Cat;
    // a->makeSound();
    // b->makeSound();

    Dog a;
    Cat b;
  

//        Animal *a[4];
//        a[0]=new Dog;
//        a[1]=new Cat;
//        a[2]=new Dog;
//        a[3]=new Cat;
//        for(int i=0;i<4;i++){
//         a[i]->makeSound();
//        }


//this proves that before constucting the child object
// the parent object is created every time
       
    
       


}