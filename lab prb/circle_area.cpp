#include <bits/stdc++.h>
using namespace std;
const float pi = 3.1416;
class circle {
    private:
    int redius;
    public:
    circle ( int redius) : redius(redius){}
    
    float area () {
        return pi*redius*redius;
    }
    void display () {
        cout << "the area of the circle  : " << area();
    }
    
} ;

int main() {
	int red ;
	cin >> red;
	circle c1(red);
	c1.display();
	return 0;

}
