#include <bits/stdc++.h>
using namespace std;

class student {
    private:
    string name ;
    int roll,meark1,meark2,meark3;
    public:
    void set_value (string nm , int  rl ,int mk1,int mk2,int mk3) {
        name = nm ;
        roll = rl;
        meark1 = mk1;
        meark2 = mk2;
        meark3 = mk3;
    }
    
    float avg_mearks () {
        return ((meark1+meark2+meark3)/3);
    }
    
    int total_mearks () {
        return (meark1+meark2+meark3);
    }
    void display () {
        cout << "the name of the student is :" << name << "\n"<<
        "the roll of the student is : " << roll << "\n" <<
        "the avarag of all mearks is  : " << avg_mearks() << "\n"
             << "the sum of all mearks is : " << total_mearks();
    }
    
} ;

int main() {
	string name ;
	int roll , mk1,mk2,mk3;
	cin >> name >> roll >> mk1 >> mk2 >> mk3; 
	student std1;
	std1.set_value(name,roll,mk1,mk2,mk3);
	std1.display();
	return 0;

}
