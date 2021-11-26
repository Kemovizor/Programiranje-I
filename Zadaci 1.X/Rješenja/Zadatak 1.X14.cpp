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

bool isSuglasnik(char c) {
	if (!isSlovo(c))
		return false;
	if (isLower(c)) // ako je malo slovo -> pretvaramo u veliko da bismo imali manji broj 'case'-ova unutar switch-a
		c = char('A' + (c - 'a'));
	switch (c){
		case 'A': case 'E': case 'I': case 'O': case 'U': return false;
	default: 
		return true;
	}
}

char getSljedbenik(char c) {
	if (c == 'Z') return 'A';
	if (c == 'z') return 'a';
	return char(c + 1);
}

void main()
{
	char c;
	do {
		cout << "Unesite suglasnik: " << endl;
		cin >> c;
	} while (!isSuglasnik(c));
	cout << "Njemu susjedna slova su: " << char(c-1) << " i " << getSljedbenik(c) << endl;
}