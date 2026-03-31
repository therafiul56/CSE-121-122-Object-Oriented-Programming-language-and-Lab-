#include <bits/stdc++.h>
using namespace std;
class destance {
    int meater;
    
    public:
    destance(int m=0){
        meater = m;
    }
    
    destance operator++(){
        ++meater;
        return *this;
    }
    void desplay(){
        cout << meater << "\n";
    }
    
    destance operator--(){
        --meater;
        return *this;
    }
};
int main() {
	destance s1(5);
	++s1;
	s1.desplay();
	--s1;
	s1.desplay();

}
