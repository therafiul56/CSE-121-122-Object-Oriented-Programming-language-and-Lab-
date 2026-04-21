#include <bits/stdc++.h>
using namespace std;

template <typename T>
void FindMin (T arr[],int s){
    sort(arr,arr+s);
    cout << arr[0] << endl;
}

int main() {
	int arr[5] = {2,2,3,4,5};
	FindMin(arr,5);
	
	float arr2[6] = {1.2,1.3,1.4,1.5,1.6,1.7};
	FindMin(arr2,6);
	return 0;

}
