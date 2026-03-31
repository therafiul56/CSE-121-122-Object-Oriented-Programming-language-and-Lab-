#include <bits/stdc++.h>
using namespace std;

class coord{
    int x,y;
    public:
    coord(){
        x=0;
        y=0;
    }
    coord(int x1, int y1){
        x=x1;
        y=y1;
    }
    coord operator / (coord const& obj){
        coord bamboo;
        bamboo.x =  x + obj.x;
        bamboo.y =  y + obj.y;
        return bamboo;
    }
    
    void print(){
        cout << "the value of x :" << x << endl
        << "the value of y : " << y;
    }
};


int main() {
	coord a1(5,10);
	coord a2(5,10);
	coord a3 = a1 / a2;
	a3.print();
	return 0;

}
