#include<iostream>
using namespace std;

void main()
{
	for (int u1 = 0; u1 <= 1; u1++)
		for (int u2 = 0; u2 <=1; u2++)
			for (int u3 = 0; u3 <= 1; u3++)
				cout << u1 << " " << u2 << " " << u3 << " (NOR) " << !(u1 || u2 || u3) << endl;
}