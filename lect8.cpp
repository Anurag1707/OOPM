#include<iostream>
using namespace std;

class A{
    public:
      int a;
};

class D:public A{
    public:
       int d;
};

class C:public A{
    public:
       int c;

};
class B:public D, public C{
     public:
     int b;
};

int main(){
    B obj;
    obj.D::a=20;
    obj.C::a=30;

    cout<<obj.D::a<<endl;
    cout<<obj.C::a<<endl;


}

// Amiguity in multiple inheritance

// using scope resolution operator just before the variable name is one of two methods to resolve
// ambiguity cause by this hibred inhretance. This method still no recomndeted because it is confusing 
// to have two cpy of each data member of root class.

// the second solution to this problem is inheriting the root class vercualy.
// This method insure that the lowest descendent will have a single copy of the root parent 


