#include<iostream>
using namespace std;

void main()
{
	int n;
	char c;
	do {
		cout << "Unesite n: " << endl;
		cin >> n;
	} while (n < 10 || n>99);
	for (int i = 10; i <=n; i++){
		int d1 = i / 10, d2 = i % 10;
		if (d1 + d2 < d1 * d2)
			cout << i << " ";
	}
}