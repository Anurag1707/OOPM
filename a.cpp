#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *first, *temp, *ttemp, *p;

void init(){
    first=temp=ttemp=p= NULL;
}
void Create_first(int){
    first:new node;
    cin>> first->data;
    first->next = NULL;
}
void addnode(int){
     temp=first;
     while(temp->next!=NULL){
        temp= temp->next;
     }
     ttemp=new node;
     ttemp->next=NULL;
     cin>>ttemp->data;
     temp->next=ttemp;
}
void display(){
    temp=first;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
int main(){
   init();
   Create_first(10);
   addnode(20);
   addnode(30);
   addnode(40);
   addnode(50);
   display();
}

    

