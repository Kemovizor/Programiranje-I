#include <iostream>
using namespace std;

bool f(int x) {
	x = abs(x);
	if (x == 1)
		return false;
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0)
			return false;
	return true;
}
bool g(int x, int d) {
	x = abs(x);
	if (d < 0 || d > 9)
		return false;
	while (x > 0)
	{
		if (x % 10 == d)
			return true;
		x /= 10;
	}
	return false;
}
void main() {
	int n, d;
	do {
		cout << "Unesite 'n': " << endl;
		cin >> n;
	} while (n < 100 || n>1000);
	do {
		cout << "Unesite cifru 'd': " << endl;
		cin >> d;
	} while (d < 0 || d>9);
	int C = 0;
	for (int i = 2; i <= n; i++)
		C += f(i) * g(i, d);
	cout << "Rezultat: C je jednako " << C << endl;
}
