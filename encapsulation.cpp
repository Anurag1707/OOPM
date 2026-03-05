#include <iostream>
using namespace std;

class game{
    private: 
        int data;
    
    public: 
        void setdata(int x){
            data = x;
        }
        void getdata(int x){
            if(x==data){
                cout<<"mobile unlock";
            }
            else{
                cout<<"Lock mobile";
            }
        
    }
};

int main(){
    game g;
    g.setdata(100);
    g.getdata(1000);
}