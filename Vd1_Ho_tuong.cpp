/* 
X(0)= 1,  Y(0) =1
X(n) = X(n -1) + Y(n-1)
Y(n) = X(n-1)*Y(n-1)
*/


#include <iostream>
using namespace std;
int X(int n);
int Y(int n);


int X(int n) {
	if (n == 0) return 1;
	else return X(n - 1) + Y(n - 1);
}


int Y(int n) {
	if (n == 0) return 1;
	else return X(n - 1) * Y(n - 1);
}

int main() {
	cout << X(3) << " " << Y(3) << endl;
	return 0;
}