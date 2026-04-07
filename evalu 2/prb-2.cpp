#include <bits/stdc++.h>
using namespace std;

class student{
    int English;
    int Bangla;
    int Math;
public:
    student(int a=0,int b=0,int c=0) : English(a) , Bangla(b),Math(c){}
    
    bool operator < (student ob){
        int avg1 = (English + Bangla + Math) / 3;
        int avg2 = (ob.English + ob.Bangla + ob.Math)/3;
        
        return ((avg1 < avg2) ? true : false);
    }
    
    bool operator != (student ob){
        int avg1 = (English + Bangla + Math) / 3;
        int avg2 = (ob.English + ob.Bangla + ob.Math)/3;
        
        return ((avg1 != avg2) ? true : false);
    }
    
    void desplaBangla(){
        cout << "the value of English = " << English << endl
             << "the value of Bangla = " << Bangla << endl
             << "The value of Math = " << Math << endl;
    }
};



int main() {

    student c1(5,5,5);
    student c2(10,10,10);
    student c4(10,10,10);
    if(c1<c2){
        cout << "2nd student great" << endl;
    }
    else{
        cout << "1st student great " << endl;
    }
    
    if(c1!=c2){
        cout << "not equal" << endl;
    }
    else{
        cout << "equal " << endl;
    }
    
    if(c4!=c2){
        cout << "Not equal" << endl;
    }
    else{
        cout << "equal " << endl;
    }
	
	return 0;
}
