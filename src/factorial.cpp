#include "bundle.hpp"

void factorial (char *x)
{
	int s = atoi(x), y = 1;
	while (s > 1)
	{
		y = y * s;
		s--;
	}
	cout << x << "! = " << y << endl;
}
