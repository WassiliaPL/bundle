#include "bundle.hpp"

void min_max (int x[], int y)
{
	for (int i = 0; i < y; i++)
	{
        	for (int j = 0; j < y - 1; j++)
        	{
            		if (x[j] > x[j + 1])
                 	swap (x[j], x[j + 1]);
        	}
    	}
	cout << "max: " << x[y - 1] << endl;
	cout << "min: " << x[0] << endl;
}
