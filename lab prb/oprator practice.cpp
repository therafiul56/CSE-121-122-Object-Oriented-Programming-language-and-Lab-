#include <bits/stdc++.h>
using namespace std;

class Number{
    int value;
    
    public:
    
    Number(int a=0){
        value = a;
    }
    
    
    Number operator+ (Number ob){
        Number temp ;
        temp.value = value + ob.value;
        return temp;
    }
    
    
    Number operator * (Number ob){
        Number temp ;
        temp.value = value * ob.value;
        return temp;
    }
    Number operator++(){
        ++value;
        return *this;
    }
    
    void desplay(){
        cout << "the value is :" << value << endl;
    }
};

int main() {
	Number n1(5),n2(5);
	Number n3 = n1 + n2;
	n3.desplay();
	n2 = n3*n1;
	n2.desplay();
	++n2;
	n2.desplay();
	return 0;

}
