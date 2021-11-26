#include <iostream>
using namespace std;

bool cifreSortirane(int x) {
	int trenutnaCifra = 9;
	while (x > 0)
	{
		if (trenutnaCifra >= x % 10)
			trenutnaCifra = x % 10;
		else
			return false;
		x /= 10;
	}
	return true;
}
void main() {
	int x;
	do {
		cout << "Unesite 'x': " << endl;
		cin >> x;
	} while (x <= 0);
	cout << "Cifre unesenog broja " << (cifreSortirane(x) ? "su" : "nisu") << " sortirane" << endl;
}