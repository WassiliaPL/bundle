#include "bundle.hpp"

void dec2all (char *x, char *y)
{
	int d = atoi(x), k = atoi(y), output[100];
	int temp = d, j, i = 0;
	if(k>35) cout << "Too large numeral system for this program!" << endl;
	if(k>1 and k<36)
	{
		do
		{
			output[i] = temp%k;
			temp = temp/k;
			i++;
		}
		while (temp > 0);
		j = i;
		cout << d << "(10)" << " = ";
		for (i=j-1; i>=0; i--)
		{
			if (output[i] == 10) cout << "A";
			else if (output[i] == 11) cout << "B";
			else if (output[i] == 12) cout << "C";
			else if (output[i] == 13) cout << "D";
			else if (output[i] == 14) cout << "E";
			else if (output[i] == 15) cout << "F";
			else if (output[i] == 16) cout << "G";
			else if (output[i] == 17) cout << "H";
			else if (output[i] == 18) cout << "I";
			else if (output[i] == 19) cout << "J";
			else if (output[i] == 20) cout << "K";
			else if (output[i] == 21) cout << "L";
			else if (output[i] == 22) cout << "M";
			else if (output[i] == 23) cout << "N";
			else if (output[i] == 24) cout << "O";
			else if (output[i] == 25) cout << "P";
			else if (output[i] == 26) cout << "Q";
			else if (output[i] == 27) cout << "R";
			else if (output[i] == 28) cout << "S";
			else if (output[i] == 29) cout << "T";
			else if (output[i] == 30) cout << "U";
			else if (output[i] == 31) cout << "V";
			else if (output[i] == 32) cout << "W";
			else if (output[i] == 33) cout << "X";
			else if (output[i] == 34) cout << "Y";
			else if (output[i] == 35) cout << "Z";
			else
			cout << output[i];
		}
		cout << "(" << k << ")" << endl;
	}
	if(k<2) cout << "This numeral system does not exist!" << endl; 
}

