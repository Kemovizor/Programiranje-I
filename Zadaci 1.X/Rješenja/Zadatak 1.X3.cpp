#include<iostream>
using namespace std;

void main()
{
	int n;
	do {
		cout << "Unesite n: " << endl;
		cin >> n;
	} while (n < -5 || n == 0);
	float S = 0.0f;
	for (int i = -5; i <= n; i++)
		S += abs(float(i) / n);
	cout << "Suma (S) je: " << S << endl;
}