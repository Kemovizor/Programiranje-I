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
void main() {
	int n;
	do {
		cout << "Unesite 'n': " << endl;
		cin >> n;
	} while (n <= 0);
	cout << "Ispis svih brojeva\n";
	for (int i = 1; i <= n; i++)
		if (checkIfSadrzi(i))
			cout << i << " ";
}