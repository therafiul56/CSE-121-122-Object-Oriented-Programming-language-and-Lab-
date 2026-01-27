#include <bits/stdc++.h>
using namespace std;

class samp {
    private :
        int a;
        
    public :
        samp (int i) {
            a = i;
        }
        
        int get_I(){
            return a;
        }
} ;

int sqr_it (samp a,samp b) {
    int sum = a.get_I() + b.get_I();
    return sum * sum;
}

int main() {
	samp a(5) ,b(5);
    cout << sqr_it(a,b);
	return 0;

}
