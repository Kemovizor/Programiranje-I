#include<iostream>
using namespace std;

//Provjera da li je veliko slovo
bool isUpper(char c) {
	return c >= 'A' && c <= 'Z';
}
//Provjera da li je malo slovo
bool isLower(char c) {
	return c >= 'a' && c <= 'z';
}
bool isSlovo(char c) {
	return isUpper(c) || isLower(c);
}
char uradiPomak(char c, int pomak) {
	int donjaGranica = 0, gornjaGranica = 0;
	if (isUpper(c)) {
		donjaGranica = 'A'; // implicitna konverzija char -> ASCII integer
		gornjaGranica = 'Z' + 1; // implicitna konverzija char->ASCII integer
	}
	else {
		donjaGranica = 'a';
		gornjaGranica = 'z' + 1;
	}
	pomak = pomak % (gornjaGranica - donjaGranica);
	// na ovaj se nacin pomak modulira (%) duzinom alfabeta (ukupnim brojem slova)
	//tako se obezbjedjuje da vrijednost pomaka bude u okviru duzine alfabeta 
	//Npr: neka je duzina engleskog alfabeta 26 (gornjaGranica-donjaGranica)
	//  0 % 26 = 0  (konacni pomak = 0)
	//  1 % 26 = 1  (konacni pomak = 1)
	//  2 % 26 = 2  (konacni pomak = 2)
	//  3 % 26 = 3  (konacni pomak = 3)
	// ...
	// 24 % 26 = 24 (konacni pomak = 24)
	// 25 % 26 = 25 (konacni pomak = 25)
	// 26 % 26 = 0 (konacni pomak = 0)
	// 27 % 26 = 1 (konacni pomak = 1)
	// 28 % 26 = 2 (konacni pomak = 2)
	// 29 % 26 = 3 (konacni pomak = 3)
	// itd.
	//Ovo je takozvano cirkularno kretanje (npr. kretanje kazaljke na satu (od 0 do 23 i tako u krug))
	//Primjer kazaljke na satu se takodjer moze simulirati upotrebom modularne aritmetike
	return char(c + pomak);
}
void main()
{
	int n;
	char c;
	do {
		cout << "Unesite n: " << endl;
		cin >> n;
	} while (n <= 0);
	do {
		cout << "Unesite c: " << endl;
		cin >> c;
	} while (!isSlovo(c));

	cout << "Nakon pomicanja za vrijednost " << n << " dobija se slovo " << uradiPomak(c, n) << endl;
}