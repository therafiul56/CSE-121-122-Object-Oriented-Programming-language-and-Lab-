#include <bits/stdc++.h>
using namespace std;

class Complex{
    int real,imag;
    public:
    Complex(int real1=0, int imag1=0){
        real=real1;
        imag=imag1;
    }
    Complex operator + (Complex &obj){
        Complex hi;
        hi.real = (real*obj.real)-(imag*obj.imag);
        hi.imag = (real*obj.imag)+(imag*obj.real);
        return hi;
        
        
    }
    
    void print(){
        cout << "the value of real :" << real << endl
        << "the value of imag : " << imag;
    }
};


int main() {

	Complex a1(5,10);
	Complex a2(5,10);
	Complex a3 = a1 + a2;
	a3.print();
	return 0;

}
