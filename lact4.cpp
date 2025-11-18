#include<iostream>
using namespace std;
class Demo
{
public:
   int data;
   Demo(){
    cout<<"Object constucted \n";
   }
   ~ Demo(){
    cout<<"Object desturtor \n";
   } 
};
 int main(){
    Demo d;
 }