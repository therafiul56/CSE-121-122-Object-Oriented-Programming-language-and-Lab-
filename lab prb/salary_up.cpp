#include <bits/stdc++.h>
using namespace std;

struct Employee {
    long long id;
    string name;
    long long basic_salary;
    long long DA;
    long long HRA;
    Employee (long long id,string name, long long basic_salary,long long DA,long long HRA) {
        this -> name =name;
        this -> id = id;
        this -> DA = DA;
        this -> HRA = HRA;
        this -> basic_salary = basic_salary;
        
        
    }
    
    void desplay() {
        cout  << "my name : " << name << "\n" << 
              
    }
    long long gross_salary(){
        return  (basic_salary + DA + HRA);
    }
};

int main() {
	Employee ab(202455,"rafi",2000,200,50);
	Employee *pt = &ab;
	cout << pt->gross_salary();
	return 0;

}
