#include "bundle.hpp"

void fileinput (char *x, char *y)
{
	fstream file;
	string txt = x;
	unsigned int l = txt.length();
	file.open(y, fstream::out | fstream::app);
	if ((txt[0] == '\\') and (txt[1] == 'n') and (txt[l-2] == '\\') and (txt[l-1] == 'n'))
	{
		txt.erase (l-2, l);
		txt.erase (0, 2);
		file << "\n" + txt + "\n";
	}
	else if ((txt[l-2] == '\\') and  (txt[l-1] == 'n'))
	{
		txt.erase (l-2, l);
		file << txt + "\n";
	}
	else if ((txt[0] == '\\') and  (txt[1] == 'n'))
	{
		txt.erase (0, 2);
		file << "\n" + txt;
	}
	else file << txt;
	file.close();
}
