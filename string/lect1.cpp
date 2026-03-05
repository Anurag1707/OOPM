#include<iostream>
#include<string>
using namespace std;


int main(){
    //declaration and initialization 
    // string s;
    // cout<<s.size()<<endl;
    // cout<<s.capacity()<<endl;
    // s.reserve(100); //capacity badha sakte haii
    // cout<<s.capacity();
   
   
   
    // string s="apple";
    // cout<<s.size()<<endl;
    // cout<<s.capacity()<<endl;
    // string s1(s);
    // cout<<s1;
    // string s2(10,'a');
    // cout<<s2<<endl;

    // //user input
    // cin>>s;
    // cout<<s;

    // //full phrase
    // getline(cin,s);
    // cout<<s;


    //  string s1 ="aello";
    //  string s2 ="bello";
    // //  cout<<(s1>s2);
    // //  cout<<s1.compare(s2);
    // //  cout<<'H'-'h'<<endl;
    // //  cout<<'h'-'H';

    // cout<<s1.find("a")<<endl;
    // cout<<s1.find_last_of("l")<<endl;
    // cout<<s1.find_last_not_of("l");


    string s1="mathematics";
    if(s1.find("ma")!=string::npos){
         cout<<"found";
    }else cout<<"not found";

    cout<<string::npos;
    



}



//in c++ string is a special class that is created to make strings handling easy. the memorey where 
//the char. of memory is same is a char* buffer which is 
//to otemize memory the size of the buffer is expeneded on basis of neeed when inclice contain 
//15 memory loaction at the begning if a bigger sting save inot thebuffer the memory is relocated 
//bigger to its size