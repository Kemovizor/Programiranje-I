#include<iostream>
using namespace std;

void main()
{
	int S = 0;
	for (int i = 1; i <= 5; i++)
	{
		int faktorijel = 1;
		for (int j = 1; j <= i; j++)
			faktorijel *= j;
		S += faktorijel;
	}
	cout << "Suma (S) je: " << S << endl;
}