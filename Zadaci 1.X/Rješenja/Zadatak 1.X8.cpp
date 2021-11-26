#include<iostream>
using namespace std;

void main()
{
	int n;
	do {
		cout << "Unesite n: " << endl;
		cin >> n;
	} while (n <1 || n>10);
	float P = 1.0f;
	for (int i = 1; i <= n; i++)
		P *= pow(i + 1, -1);
	cout << "Produkt (P) je: " << P << endl;
}