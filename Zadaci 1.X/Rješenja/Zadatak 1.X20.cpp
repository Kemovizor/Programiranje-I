#include<iostream>
using namespace std;

bool isStariji(int d1, int m1, int g1, int d2, int m2, int g2) {
	if (g1 < g2)
		return true;
	else if (g1 == g2) {
		if (m1 < m2)
			return true;
		else if (m1 == m2) {
			if (d1 <= d2)
				return true;
			return false;
		}
		return false;
	}
	return false;
}
void main()
{
	int dan, mjesec, godina;
	int sDan = 31, sMjesec = 12, sGodina = 10000; //varijable za cuvanje najstarijeg datuma
	for (int i = 0; i < 3; i++)
	{
		cout << "Unos [" << i+1 << "] datuma" << endl;
		do
		{
			cout << "Unesite dan: " << endl;
			cin >> dan;
		} while (dan < 1 || dan>31);
		do
		{
			cout << "Unesite mjesec: " << endl;
			cin >> mjesec;
		} while (mjesec < 1 || mjesec>12);
		do
		{
			cout << "Unesite godinu: " << endl;
			cin >> godina;
		} while (godina < 1);

		if (isStariji(dan, mjesec, godina, sDan, sMjesec, sGodina)) {
			sDan = dan;
			sMjesec = mjesec;
			sGodina = godina;
		}
	}
	cout << "Najstariji datum od unesena tri je: " << sDan << "." << sMjesec << "." << sGodina << endl;
}