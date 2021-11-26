#include <iostream>
using namespace std;

int reverse(int broj) {
	int okrenutiBroj = 0;
	broj = abs(broj);

	while (broj > 0)
	{
		okrenutiBroj *= 10;
		okrenutiBroj += broj % 10;
		broj /= 10;
	}
	return okrenutiBroj;
}
bool s(int x, int y) {
	if (x < 0 || y < 0)
		return false;
	int sumOfDigits = 0;
	while (x > 0) {
		sumOfDigits += (x % 10);
		x /= 10;
	}
	return sumOfDigits == y;
}
void main() {
	int n, b;
	do {
		cout << "Unesite 'n': " << endl;
		cin >> n;
	} while (n < 0 || n > 1000);
	do {
		cout << "Unesite 'b': " << endl;
		cin >> b;
	} while (b < 0);
	int C = 0;
	cout << "Ispis brojeva\n";
	for (size_t i = 0; i <= n; i++)
		if (i == reverse(i) && s(i, b))
			cout << i << " ";
}