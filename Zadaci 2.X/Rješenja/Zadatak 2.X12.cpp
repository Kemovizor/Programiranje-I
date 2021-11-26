#include <iostream>
using namespace std;

int getBrojCifara(int broj) {
	return log10(abs(broj)) + 1;
}
bool isValid(int binarniBroj) {
	while (binarniBroj > 0)
	{
		if (binarniBroj % 10 > 1)
			return false;
		binarniBroj /= 10;
	}
	return true;
}
int logickaImplikacija(int b1, int b2) {
	int rezultat = 0;

	int brojC = getBrojCifara(b1);
	for (int i = 0; i < brojC; i++)
	{
		rezultat += (!(b1 % 10) || (b2 % 10)) * int(pow(10, i));
		b1 /= 10;
		b2 /= 10;
	}
	return rezultat;
}
void main() {
	int b1, b2;
	do {
		do {
			cout << "Unesite 'b1': " << endl;
			cin >> b1;
		} while (!isValid(b1));

		do {
			cout << "Unesite 'b2': " << endl;
			cin >> b2;
		} while (!isValid(b2));
	} while (getBrojCifara(b1) != getBrojCifara(b2));
	cout << "Rezultat je:" << logickaImplikacija(b1, b2) << endl;
}