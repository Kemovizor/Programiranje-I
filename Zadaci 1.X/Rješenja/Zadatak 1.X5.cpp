#include<iostream>
using namespace std;

void main()
{
	float S = 0.0f;
	for (int i = -10; i <= 10; i++)
		S += pow(i, 2);
	for (int i = -5; i <= 5; i++)
		S -= i;
	S *= 1 / sqrt(5);
	cout << "Suma (S) je: " << S << endl;
}