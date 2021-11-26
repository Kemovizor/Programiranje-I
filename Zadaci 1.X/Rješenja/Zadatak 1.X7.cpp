#include<iostream>
using namespace std;

void main()
{
	int n;
	do {
		cout << "Unesite n: " << endl;
		cin >> n;
	} while (n <1 || n>=16);
	float S = 0.0f;
	for (int i = 1; i <= n; i++) {
		S += pow(i, 2);
		for (int j = 5; j <= 10; j++)
			S += (pow(i - j, 2) / pow(j, 2));
	}
	cout << "Suma (S) je: " << S << endl;
}