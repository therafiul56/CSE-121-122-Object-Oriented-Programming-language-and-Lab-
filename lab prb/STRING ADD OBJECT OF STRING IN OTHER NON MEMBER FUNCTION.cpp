#include <bits/stdc++.h>
using namespace std;

class Sample {
    private :
        string s;
        
    public :
        Sample (string i) {
            s = i;
        }
        
        string get_s(){
            return s;
        }
} ;

string add_string (Sample a,Sample b) {
    string sum = a.get_s() + b.get_s(); 
    return sum;
}

int main() {
	Sample a("cat ") ,b("mews ");
    cout << add_string(a,b);
	return 0;

}
