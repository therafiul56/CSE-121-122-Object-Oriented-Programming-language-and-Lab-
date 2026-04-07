#include <bits/stdc++.h>
using namespace std;

class person{
    string name ;
    int age;
public :
    void sepeI(string s,int a) {
        name = s;
        age = a;
    }
    
    void displayper(){
        cout << "the name is : " << name << endl
             << "the age is : " << age << endl;
    }
};


class student : public person {
    string i;
    
public :
    void sestid(string j){
        i=j;
    }
    void displaystu(){
        displayper();
        cout << "The id id : " << i << endl;
    }
    
    
};

class graduate : public student{
    string theses;
    public :
    void setgra(string j){
        theses = j;
    }
    void segra(){
        displaystu();
        cout << "The these is : " << theses << endl;
    }
};
int main() {

    graduate gr;
    gr.sepeI("rafi",21);
    gr.sestid("269");
    gr.setgra("to");
    gr.segra();
    return 0;
	
	return 0;
}
