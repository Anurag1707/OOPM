#include<iostream>
using namespace std;

class Animal{
    public:
   virtual void makeSound(){
        cout<<"Animal sound"<<" ";
    }
};

class Dog: public Animal{
    public:
    void makeSound(){
        cout<<"Bark!!!"<<" ";
    }
};

class Cat: public Animal{
    public:
    void makeSound(){
        cout<<"meow"<<endl;
    }
};

int main(){
//     Animal *a= new Dog;
//     Animal *b= new Cat;
//     a->makeSound();
//     b->makeSound();
       Animal *a[4];
       a[0]=new Dog;
       a[1]=new Cat;
       a[2]=new Dog;
       a[3]=new Cat;
       for(int i=0;i<4;i++){
        a[i]->makeSound();
       }
       
// due to dynmic poli.. we can accomoded object of various type same place 
// if they belong to the 
       
    
       


}