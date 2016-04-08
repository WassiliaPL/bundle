#include "bundle.hpp"

unsigned long long hex2dec(string x)
{
    unsigned long long n;
    stringstream ss;
    ss << hex << uppercase << x;
    ss >> n;
    return n;
}

int expo (int x, int y)
{
	int i = y, r = 1;
	if (y == 0) return 1;
	else if (y == 1) return x;
	else
	{
		while (i != 0)
		{
			r = r * x;
			i--;
		}
		return r;
	}
}

void all2dec (char *x, char *y) //inny na dziesietny
{
	string h = x;
	int k = atoi(y);
	if (k == 16) cout << h << "(" << k << ")" << " = " << hex2dec(h) << "(10)" << endl;
	else
	{
		int j = h.length() - 1, r = 0;
		for (unsigned int i = 0; i < h.length(); i++)
		{
			char p = h[i];
			int z = p - '0';
			r = r + (z * expo (k, j));
			j--;
		}
		cout << h << "(" << k << ")" << " = " << r << "(10)" << endl;
	}
}
