#include <iostream>
using namespace std;

int func(int n) {
	if (n > 10)
		return n;
	else return func(func(n + 2));
}


// Vidu ve de quy long nhau:
/*
A(m, n) = n+1    nếu m = 0
		= A(m-1,1) nếu m > 0 và n = 0
		= A(m-1, A(m, n-1))   nếu m >0 và n >0;
*/

int akerman(int m, int n) {
	if (m == 0) return n + 1;
	if (n == 0) return akerman(m - 1, 1);
	return akerman(m - 1, akerman(m, n - 1));
}

void main() {
	cout << func(7) << endl;
	cout << akerman(2, 1) << endl;	
}