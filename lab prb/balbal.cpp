#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int roll;
    vector<int>markes;
    Student (string nam,int rl,int m1,int m2,int m3){
        name = nam;
        roll = rl;
        markes.push_back(m1);
        markes.push_back(m2);
        markes.push_back(m3);
    }
    
    int avg() {
        int sum ;
        for(int i = 0 ; i<3 ; i++) {
            sum += v[i];
        }
        return sum/3;
    }
    
};

int main() {
	Student ab(202455,"rafi",2000,200,50);
	Student *pt = &ab;
	cout << pt->gross_salary();
	return 0;

}
