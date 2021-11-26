#include<iostream>
using namespace std;

bool isPrijestupna(int godina) {
	return ((godina % 4 == 0) && (godina % 100 != 0)) || (godina % 400 == 0);
}
int getUkupanBrojDana(int mjesec, int godina) {
	switch (mjesec)
	{
		case 2: 
			return isPrijestupna(godina) ? 29 : 28;
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			return 31;
		default:
			return 30;
	}
}
bool isValidan(int d, int m, int g) {
	return d <= getUkupanBrojDana(m, g); // ukoliko je vrijednost 'd' manja ili jednaka od max. broja dana (za taj mjesec i godinu), tada je datum validan
}
void main()
{
	int dan, mjesec, godina;
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
	cout << "Datum " << (isValidan(dan, mjesec, godina) ? "je" : "nije") << " validan." << endl;
}