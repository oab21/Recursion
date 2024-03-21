

#include <iostream>
using namespace std;

/*
S(1) = 1;
S(n) = S(1) + S(2) + .... + S(n-1)
*/
int S(int n) {
	if (n == 1) return 1;
		int tong = 0;
		for(int i = n - 1; i >= 1; --i)
			tong += S(i);
		return tong;
}


// X(n) = n*n*X(0) + (n-1)*(n-1)*X(1) + ..... + 1*1*X(n-1) , X(0) = 1;
int X(int n) {
	if (n == 0) return 1;
	long long  Sn = 0;
	for (int i = n; i >= 1; --i) {
		Sn += i * i * X(n - i);
	}
	return Sn;
}

int main() {

	cout << S(4) << endl;
	cout << X(4) << endl;
	return 0;
}