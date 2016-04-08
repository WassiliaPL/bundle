#include "bundle.hpp"

void schedule (char *x) //rozklad na czynniki pierwsze
{
	int y = atoi(x), i = 2;
	while(y != 1)
	{
		if (y % i == 0)
		{
			y = y/i;
			cout << "factor: " << i << endl;
		}
		else i++;
	}
}
