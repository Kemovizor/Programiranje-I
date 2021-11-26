#include <iostream>
using namespace std;

bool checkIfSadrzi(int x) {
	int cifra = x % 10;
	while (x > 0)
	{
		if (x % 10 != cifra)
			return false;
		x /= 10;
	}
	return true;
}
int sumaCifara(int x) {
	int suma = 0;
	while (x > 0)
	{
		suma += x % 10;
		x /= 10;
	}
	return suma;
}
void main() {
	int n, x;
	do {
		cout << "Unesite 'n': " << endl;
		cin >> n;
	} while (n <= 0);
	do {
		cout << "Unesite 'x': " << endl;
		cin >> x;
	} while (x <= 0);
	cout << "Ispis svih brojeva\n";
	for (int i = 1; i <= n; i++)
		if (checkIfSadrzi(i) && (i % 2 == 0) && (sumaCifara(i) >= x))
			cout << i << " ";
}