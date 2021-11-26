#include <iostream>
using namespace std;

bool isPrime(int x) {
	x = abs(x);
	if (x == 1)
		return false;
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0)
			return false;
	return true;
}
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
void main() {
	int n, d;
	do {
		cout << "Unesite 'n': " << endl;
		cin >> n;
	} while (n < 10 || n > 1000);
	int C = 0;
	cout << "Ispis brojeva\n";
	for (int i = 2; i <= n; i++)
		if (isPrime(i) && isPrime(reverse(i)))
			cout << i << " ";
}
