#include "bundle.hpp"

void euklides (char *x, char *y)
{
	int a = atoi(x), b = atoi(y);
	while (a != b)
	{
		if(a > b) a = a - b;
		else b = b - a;
	}
	cout << a << endl;
}
