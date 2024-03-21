#include <iostream>
using namespace std;

void xuat1(int n);
void xuat2(int n);

void xuat1(int n) {
	if (n > 0) {
		cout << n << " ";
		xuat2(n - 1);
	}
}
void xuat2(int n) {
	if (n > 1) {
		cout << n << " ";
		xuat1(n - 2);
	}
}

int main() {
	xuat1(6);
	return 0;
}