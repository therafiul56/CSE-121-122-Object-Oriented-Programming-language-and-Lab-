#include <bits/stdc++.h>
using namespace std;

template <typename T>
T Min (T a1,T a2){
    return ((a1<a2) ? a1 : a2 );

}

int main() {
	int a1=5,a2=10;
	cout << Min(a1,a2) << endl;
	
	char c1='a',c2='b';
	cout << Min(c1,c2) << endl;
	return 0;

}
