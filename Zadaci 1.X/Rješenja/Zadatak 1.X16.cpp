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
	
	char prvoSlovo = isUpper(c) ? 'A' : 'a';
	int ascii = c + pomak;
	ascii = ((ascii - prvoSlovo) % 26) + prvoSlovo;
	return char(ascii);
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