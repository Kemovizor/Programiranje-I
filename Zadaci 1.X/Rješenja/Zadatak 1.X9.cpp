#include<iostream>
using namespace std;

void main()
{
	int P = 1;
	for (int i = 1; i <= 10; i++) {
		int S = 0;
		for (int j = -5; i <= 5; i++)
			S += (i - 1) * (1 - j);
		P *= S;
	}
	cout << "Produkt (P) je: " << P << endl;
}