//shallow copy

#include<iostream>
using namespace std;
class Demo{
    public:
    int x;
    float y;
    void display(){
        cout<<"x="<<x<<"y="<<y<<endl;
    }
};
int main(){
          Demo d;
          d.x=10;
          d.y=3.5f;
          Demo d2=d;
          d.display();
          d2.display();
}