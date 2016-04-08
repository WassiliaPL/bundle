#include "bundle.hpp"

void fibonacci (char *x)
{
	unsigned int n = atoi(x);
	unsigned int F[n];
	F[0] = 0;
	F[1] = 1;
	F[2] = 1;
	if (n == 0) cout << "F(0) = " << F[0] << endl;
	else if (n == 1) cout << "F(0) = " << F[0] << endl << "F(1) = " << F[1] << endl;
	else
	{
		cout << "F(0) = " << F[0] << endl << "F(1) = " << F[1] << endl;
		for (unsigned int i = 2; i <= n; i++)
		{
			F[i] = F[i - 1] + F[i - 2];
			cout << "F" << "(" << i << ") = " << F[i] << endl;
		}
	}
}
