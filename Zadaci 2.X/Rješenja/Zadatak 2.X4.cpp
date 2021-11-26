#include <iostream>
using namespace std;

int f1(int x, int d) {
	x = abs(x);
	int counter = 0;
	while (x > 0) {
		if (x % 10 == d)
			counter++;
		x /= 10;
	}
	return counter;
}
bool f2(int x, int y) {
	return x == y;
}
void main() {
	int n, c1, c2;
	do {
		cout << "Unesite 'n': " << endl;
		cin >> n;
	} while (n < 0 || n>10000);
	do {
		cout << "Unesite 'c1': " << endl;
		cin >> c1;
	} while (c1 < 0 || c1>9);
	do {
		cout << "Unesite 'c2': " << endl;
		cin >> c2;
	} while (c2 < 0 || c2>4);
	int C = 0;
	for (int i = 0; i <= n; i++) {
		C += f2(c2, f1(i, c1));
	}
	cout << "Rezultat: C je jednako " << C << endl;
}