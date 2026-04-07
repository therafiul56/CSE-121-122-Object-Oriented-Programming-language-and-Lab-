#include <bits/stdc++.h>
using namespace std;

class coord{
    int x;
    int y;
public:
    coord(int a=0,int b=0) : x(a) , y(b){}
    friend coord operator + (coord ob , int a);
    friend coord operator + (int a , coord ob);
    
    void desplay(){
        cout << "the value of x = " << x << endl
             << "the value of y = " << y << endl;
    }
};

coord operator + (coord ob , int a){
    coord temp ;
    temp.x = ob.x+a;
    temp.y = ob.y+a;
    return temp;
}

coord operator + (int a , coord ob){
    coord temp;
    temp.x = a + ob.x;
    temp.y = a + ob.y;
    return temp;
}

int main() {
    coord c3,c4;
	coord c1(10,10);
	coord c2(10,10);
	c3 = c1 + 10;
	c3.desplay();
	c4 = 5 + c2;
	c4.desplay();
	return 0;
}
