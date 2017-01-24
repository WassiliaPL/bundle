#include "bundle.hpp"

void sort (int x[], int y)
{
	for (int i = 0; i < y; i++)
	{
        	for (int j = 0; j < y - 1; j++)
        	{
            		if (x[j] > x[j + 1])
                 	swap (x[j], x[j + 1]);
        	}
    	}
    	for (int i = 0; i < y; i++) cout << x[i] << " ";
}
