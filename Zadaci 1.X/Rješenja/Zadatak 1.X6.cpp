#include<iostream>
using namespace std;

void main()
{
	int n;
	do {
		cout << "Unesite n: " << endl;
		cin >> n;
	} while (n <= 5);
	int S = 0;
	for (int i = 1; i <= n; i++)
		for (int j = 5; j <= 10; j++)
			S += (pow(i, 2) * j - pow(j, 2) * i);
	cout << "Suma (S) je: " << S << endl;
}