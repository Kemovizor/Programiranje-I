#include<iostream>
using namespace std;
void main()
{
	int n;
	do {
		cout << "Unesite n: " << endl;
		cin >> n;
	} while (n <0);

	float S = 0;
	for (int i = -5; i <= n; i++)
	{
		S += n * abs(i/pow(n, 2));
	}
	cout << "Suma (S) je: " << S << endl;
}