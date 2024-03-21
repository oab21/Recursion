// Tính kCn = n!/(k!*(n-k)!)
// kCn = kC(n-1) + (k-1)C(n-1)

#include <iostream>
using namespace std;
int tohop(int n, int k) {
	if (k == 0 || k == n) return 1;
	else
		return tohop(n-1, k) + tohop(n - 1, k - 1);
}
int main() {

	return 0;
}