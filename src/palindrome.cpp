#include "bundle.hpp"

void palindrome (char *x)
{
	string str = x;
	unsigned int j = str.length() - 1;
	unsigned int i = 0;
	bool b;
	while (i < j)
	{
		if (str[i] == str[j])
		{
			i++;
			j--;
			b = true;
		}
		else
		{
			b = false;
			break;
		}
	}
	if(b) cout << "A palindrome" << endl;
	else cout << "Not a palindrome" << endl;
}
