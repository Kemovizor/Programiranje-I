#include <iostream>
using namespace std;

int f(int x, int d, int p) {
	int brojCifara = log10(x) + 1;
	if (p > brojCifara)
		return x;
	int noviBroj = 0;
	for (int i = 0; i < brojCifara; i++)
	{
		int cifra = x % 10;
		if (i == brojCifara - p)
			cifra = d;
		noviBroj += cifra * pow(10, i);
		x /= 10;
	}
	return noviBroj;
}
void main() {
	int x, d, p;
	do {
		cout << "Unesite 'x': " << endl;
		cin >> x;
	} while (x < 0);
	do {
		cout << "Unesite 'd': " << endl;
		cin >> d;
	} while (d < 0 || d>9);
	do {
		cout << "Unesite 'p': " << endl;
		cin >> p;
	} while (p < 1);
	cout << "Rezultat je:" << f(x, d, p) << endl;
}