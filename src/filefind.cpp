#include "bundle.hpp"

void filefind (char *x, char *y)
{
	string txt = x, out;
	fstream file;
	unsigned int k = txt.length(), line = 0, j, i, counter;
	file.open (y, fstream::in);
	if (file.is_open())
	{
		while (!file.eof())
		{
			getline (file, out);
			line++;
			j = 0;
			counter = 0;
			for (i = 0; i < out.length(); i++)
			{
				if (out[i] == txt[j]) j++;
				else j = 0;
				if (j == k) counter++;
			}
			if (counter > 0) cout << counter << " matches on line #" << line << " >> " << out << endl;
		}
	}
	else cout << "file doesn't exist" << endl;
	file.close();
}
