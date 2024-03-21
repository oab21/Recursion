#include <iostream>
using namespace std;

// Tim UCLN
int UCLN(int a, int b) {
	if (b == 0) return a;
	return UCLN(b, a % b);
}

// Ham số mũ
int mu1(int x, int n) {
	if (n == 1) return x;
	return x * mu1(x, n - 1);
}

int mu2(int x, int n) {
	if (n == 1) return x;
	if (n % 2 == 0) return mu2(x * x, n / 2);
	else return x * mu2(x * x, (n - 1) / 2);
}


int main() {
	cout << UCLN(9, 6) << endl;
	cout << mu1(5, 3) << endl;
	cout << mu2(5, 3) << endl;
	return 0;
}