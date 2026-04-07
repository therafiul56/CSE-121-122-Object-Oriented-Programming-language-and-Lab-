#include <bits/stdc++.h>
using namespace std;

class Point3D{
    int x;
    int y;
    int z;
public:
    Point3D(int a=0,int b=0,int c=0) : x(a) , y(b),z(c){}
    friend Point3D operator + (Point3D ob , int a);
    friend Point3D operator + (int a , Point3D ob);
    friend Point3D operator - (Point3D ob1,Point3D ob2);
    
    void desplay(){
        cout << "the value of x = " << x << endl
             << "the value of y = " << y << endl
             << "The value of z = " << z << endl;
    }
};

Point3D operator + (Point3D ob , int a){
    Point3D temp ;
    temp.x = ob.x+a;
    temp.y = ob.y+a;
    temp.z = ob.z+a;
    return temp;
}

Point3D operator + (int a , Point3D ob){
    Point3D temp;
    temp.x = a + ob.x;
    temp.y = a + ob.y;
    temp.z = a + ob.z;
    return temp;
}

Point3D operator - (Point3D ob1,Point3D ob2){
    Point3D temp ;
    temp.x = ob1.x - ob2.x;
    temp.y = ob1.y - ob2.y;
    temp.z = ob1.z - ob2.z;
    return temp;
}

int main() {
    Point3D c3,c4,c5;
	Point3D c1(10,10,10);
	Point3D c2(10,10,10);
	
	c3 = c1 + 10;
	c3.desplay();
	c4 = 5 + c2;
	c4.desplay();
	
	c5 = c3-c4;
	c5.desplay();
	return 0;
}
