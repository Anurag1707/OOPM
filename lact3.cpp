#include <iostream>
using namespace std;
class complex
{
  
 public:
      double real, imag;
       complex() //default construtor
       {
        real = 0;
        imag = 0;
       } 
       complex(double real,double imag) //paramterized
       {
        real=real;// left one is data member
        imag=imag;//reight one is local variable
       }
       complex(const complex&c) //copy constuctor
       {
        real = c.real;
        imag = c.imag;
       }
       complex add(complex obj)//add my cplx to another cplx
       {
        complex ans;
        ans.real = real + obj.real;
        ans.imag = imag + obj.imag;
        return ans;
       }
        complex sub(complex obj)//add my cplx to another cplx
       {
        complex ans;
        ans.real = real - obj.real;
        ans.imag = imag - obj.imag;
        return ans;
       }
       complex multiply(complex obj) //(a+ib) * (x-jy)
       {
        complex ans;
        ans.real = real * obj.real - imag*obj.imag;
        ans.imag = real * obj.imag + imag*obj.real;
        return ans;
       }
       complex conjugate()
       {
        imag = -1*imag;
        return (*this);
       }
        complex divide(complex obj)
       {
        complex ans;
        double deno = obj.real*obj.real + obj.imag*obj.imag;
        obj = obj.conjugate();
        ans = (*this).multiply(obj);
        ans.real /=deno;
        ans.imag /=deno;
        return ans;
       }
       void show()
       {
        cout << real << "+" << imag << "i" << endl;
       }
};
int main()
{
 complex c1(2,3), c2(4,5);
 complex result = c1.multiply(c2);
 result.show();
}
// this is a special keywords that denotes the pointer to the object that we create.
// this pointer is automaticaly created by c++ envioment at our disposal it is mostly use 
// to solve the ampiguity btw the local variable and the data member having same name.