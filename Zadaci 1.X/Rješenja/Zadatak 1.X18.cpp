#include<iostream>
using namespace std;

void main()
{
	int n;
	char c;
	do {
		cout << "Unesite n: " << endl;
		cin >> n;
	} while (n < 10);
	for (int i = 10; i <=n; i++){
		if (i % 3 == 0 && i % 100 == 33)
			cout << i << " ";
	}
}