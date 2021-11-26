#include<iostream>
using namespace std;

bool operacija(bool u1, bool u2, bool u3) {
	return !(u1 || u2) && u3;
}
void main()
{
	for (int u1 = 0; u1 <= 1; u1++)
		for (int u2 = 0; u2 <=1; u2++)
			for (int u3 = 0; u3 <= 1; u3++)
				cout << u1 << " " << u2 << " " << u3 << " (operacija) " << operacija(u1,u2,u3) << endl;
}