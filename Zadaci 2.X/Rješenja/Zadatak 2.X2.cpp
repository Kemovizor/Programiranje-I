#include <iostream>
using namespace std;

bool f(int x, int d1, int d2) {
	x = abs(x);
	bool hasD1 = false, hasD2 = false;
	while (x > 0)
	{
		if (x % 10 == d1)
			hasD1 = true;
		if (x % 10 == d2)
			hasD2 = true;
		x /= 10;
	}
	return hasD1 && hasD2;
}
void main() {
	int n, d1, d2;
	do {
		cout << "Unesite 'n': " << endl;
		cin >> n;
	} while (n < 100 || n>1000);
	do {
		cout << "Unesite cifru 'd1': " << endl;
		cin >> d1;
	} while (d1 < 0 || d1>9);
	do {
		cout << "Unesite cifru 'd2': " << endl;
		cin >> d2;
	} while (d2 < 0 || d2>9);
	int C = 0;
	for (int i = 0; i <= n; i++)
		C += f(i, d1, d2);
	cout << "Rezultat: C je jednako " << C << endl;
}