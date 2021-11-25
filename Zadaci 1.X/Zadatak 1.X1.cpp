#include<iostream>
using namespace std;
void main(){
	int n;
	do {
		cout << "Unesite n: " << endl;
		cin >> n;
	} while (n < 0 || n>100);
	float S = 0;
	for (size_t i = 1; i < n; i++)
		S += pow(i, 2)/sqrt(i);
	cout << "Suma (S) je: " << S << endl;
}