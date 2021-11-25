#include<iostream>
using namespace std;

void main()
{
	int n;
	do {
		cout << "Unesite n: " << endl;
		cin >> n;
	} while (n < 0);
	int S = 0;
	for (int i = n; i <= 2 * n; i++)
		S += pow(2, abs(i - 2));
	cout << "Suma (S) je: " << S << endl;
}