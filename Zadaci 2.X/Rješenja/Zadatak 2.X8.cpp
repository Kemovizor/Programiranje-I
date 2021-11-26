#include <iostream>
using namespace std;

void f(int x, int y) {
	int allEven = 0;
	int allOdd = 0;
	while (x > 0)
	{
		if ((x % 10) % 2 == 0)
		{
			allEven *= 10;
			allEven += (x % 10);
		}
		else
		{
			allOdd *= 10;
			allOdd += (x % 10);
		}
		x /= 10;
	}
	while (y > 0)
	{
		if ((y % 10) % 2 == 0)
		{
			allEven *= 10;
			allEven += (y % 10);
		}
		else
		{
			allOdd *= 10;
			allOdd += (y % 10);
		}
		y /= 10;
	}
	cout << "Broj sa svim parnim ciframa: " << allEven << endl;
	cout << "Broj sa svim neparnim ciframa: " << allOdd << endl;
}
void main() {
	int a, b;
	do {
		cout << "Unesite 'a': " << endl;
		cin >> a;
	} while (a < 0 || a > 10000);

	do {
		cout << "Unesite 'b': " << endl;
		cin >> b;
	} while (b < 0 || b > 10000);
	f(a, b);
}