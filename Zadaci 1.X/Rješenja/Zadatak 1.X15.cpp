#include<iostream>
using namespace std;

void main()
{
	for (int i = 'a'; i <'z'; i++)
		if ((i-1) % 2 == 0)
			cout << char(i) << " ";
}