#include<iostream>
using namespace std;
// class Demo{
//     public:
//        int x,y;
// };
// int main(){
//     Demo obj1;//static object
//     Demo*obj2 = new Demo(); //dynamic object
// }


class Demo{
    public:
       string name_;
       Demo(string name)
       {
        name_ = name;
        cout<<name_<<"created\n";
       }
       ~ Demo(){
        cout<<name_<<"destructed\n";
       }
};
int main(){
    Demo obj1("static obj1");
    Demo obj3("static obj2");
    Demo *obj2=new Demo("dynamic object");
    delete obj2;
}