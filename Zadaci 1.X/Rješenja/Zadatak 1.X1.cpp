#include<iostream>
using namespace std;
void main() {
	int n;
	do {
		cout << "Unesite n: " << endl;
		cin >> n;
	} while (n < 1 || n>100);
	float S = 0.0f;
	for (int i = 1; i <= n; i++)
		S += pow(i, 2) / sqrt(i);
	cout << "Suma (S) je: " << S << endl;
}