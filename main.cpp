#include<iostream>
using namespace std;
  class complex{
    
     public:
      int real;
     int imag;
         complex(int real,int imag){
        this->real=real;
        this->imag=imag;
         }  
       complex operator +(complex c){
        complex temp(0,0);
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
       }
  };
int main(){
 complex c1(2,3),c2(4,5);
 complex c3=c1+c2;
 cout<< c3.real<<"+"<<c3.imag<<"i";
}