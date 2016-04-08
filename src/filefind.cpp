#include "bundle.hpp"

void filefind (char *x, char *y)
{
	string txt = x, out;
	fstream file;
	unsigned int k = txt.length(), line = 0;
	file.open (y, fstream::in);
	if (file.is_open())
	{
		while (!file.eof())
		{
			getline (file, out);
			line++;
			for (unsigned int i = 0; i < out.length(); i++)
			{
				if ((out[i] == txt[0]) and (out[i+k-1] == txt[k-1]))
				cout << "Found on line: " << line << " >> " << out << endl;
			}
		}
	}
	else cout << "file doesn't exist" << endl;
	file.close();
}
