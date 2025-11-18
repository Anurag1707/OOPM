#include<stdio.h>
// Write a c code to find the area and perimeter of rectangle

int area(int length,int breath){
return length*breath;}

int perimeter(int length,int breath){
return 2*(length+breath);
}

int main(){
 int length,breath;
 printf("enter length");
 scanf("%d",&length);
 printf("enter breath");
 scanf("%d",&breath);

  printf("Area: %d\n",area(length,breath));
   printf("perimeter: %d",perimeter(length,breath));




}