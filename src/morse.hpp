void morse_encode (char *x)
{
	string t = x;
	for (int i = 0; i < t.length (); i++)
        {
		if ((t[i] == 'a') or (t[i] == 'A')) cout << ".-/";
		if ((t[i] == 'b') or (t[i] == 'B')) cout << "-.../";
		if ((t[i] == 'c') or (t[i] == 'C')) cout << "-.-./";
		if ((t[i] == 'd') or (t[i] == 'D')) cout << "-../";
		if ((t[i] == 'e') or (t[i] == 'E')) cout << "./";
		if ((t[i] == 'f') or (t[i] == 'F')) cout << "..-./";
		if ((t[i] == 'g') or (t[i] == 'G')) cout << "--./";
		if ((t[i] == 'h') or (t[i] == 'H')) cout << "..../";
		if ((t[i] == 'i') or (t[i] == 'I')) cout << "../";
		if ((t[i] == 'j') or (t[i] == 'J')) cout << ".---/";
		if ((t[i] == 'k') or (t[i] == 'K')) cout << "-.-/";
		if ((t[i] == 'l') or (t[i] == 'L')) cout << ".-../";
		if ((t[i] == 'm') or (t[i] == 'M')) cout << "--/";
		if ((t[i] == 'n') or (t[i] == 'N')) cout << "-./";
		if ((t[i] == 'o') or (t[i] == 'O')) cout << "---/";
		if ((t[i] == 'p') or (t[i] == 'P')) cout << ".--./";
		if ((t[i] == 'q') or (t[i] == 'Q')) cout << "--.-/";
		if ((t[i] == 'r') or (t[i] == 'R')) cout << ".-./";
		if ((t[i] == 's') or (t[i] == 'S')) cout << ".../";
		if ((t[i] == 't') or (t[i] == 'T')) cout << "-/";
		if ((t[i] == 'u') or (t[i] == 'U')) cout << "..-/";
		if ((t[i] == 'v') or (t[i] == 'V')) cout << "...-/";
		if ((t[i] == 'w') or (t[i] == 'W')) cout << ".--/";
		if ((t[i] == 'x') or (t[i] == 'X')) cout << "-..-/";
		if ((t[i] == 'y') or (t[i] == 'Y')) cout << "-.--/";
		if ((t[i] == 'z') or (t[i] == 'Z')) cout << "--../";
		if (t[i] == ' ') cout << "/";
        }
        cout << "/";
}

void morse_decode (char *x)
{
	string t = x;
	for (int i = 0; i < t.length (); i++)
        {
		if ((t[i] == '.') and (t[i + 1] == '-') and (t[i + 2] == '/'))
		{
			cout << "a";
			i = i + 2;
		}
		if ((t[i] == '-') and (t[i + 1] == '.') and (t[i + 2] == '.') and (t[i + 3] == '.') and (t[i + 4] == '/'))
		{
			cout << "b";
			i = i + 4;
		}
		if ((t[i] == '-') and (t[i + 1] == '.') and (t[i + 2] == '-') and (t[i + 3] == '.') and (t[i + 4] == '/'))
		{
			cout << "c";
			i = i + 4;
		}
		if ((t[i] == '-') and (t[i + 1] == '.') and (t[i + 2] == '.') and (t[i + 3] == '/'))
		{
			cout << "d";
			i = i + 3;
		}
		if ((t[i] == '.') and (t[i + 1] == '/'))
		{
			cout << "e";
			i = i + 1;
		}
		if ((t[i] == '.') and (t[i + 1] == '.') and (t[i + 2] == '-') and (t[i + 3] == '.') and (t[i + 4] == '/'))
		{
			cout << "f";
			i = i + 4;
		}
		if ((t[i] == '-') and (t[i + 1] == '-') and (t[i + 2] == '.') and (t[i + 3] == '/'))
		{
			cout << "g";
			i = i + 3;
		}
		if ((t[i] == '.') and (t[i + 1] == '.') and (t[i + 2] == '.') and (t[i + 3] == '.') and (t[i + 4] == '/'))
		{
			cout << "h";
			i = i + 4;
		}
		if ((t[i] == '.') and (t[i + 1] == '.') and (t[i + 2] == '/')) 
		{
			cout << "i";
			i = i + 2;
		}
		if ((t[i] == '.') and (t[i + 1] == '-') and (t[i + 2] == '-') and (t[i + 3] == '-') and (t[i + 4] == '/')) 
		{
			cout << "j";
			i = i + 4;
		}
		if ((t[i] == '-') and (t[i + 1] == '.') and (t[i + 2] == '-') and (t[i + 3] == '/')) 
		{
			cout << "k";
			i = i + 3;
		}
		if ((t[i] == '.') and (t[i + 1] == '-') and (t[i + 2] == '.') and (t[i + 3] == '.') and (t[i + 4] == '/')) 
		{
			cout << "l";
			i = i + 4;
		}
		if ((t[i] == '-') and (t[i + 1] == '-') and (t[i + 2] == '/')) 
		{
			cout << "m";
			i = i + 2;
		}
		if ((t[i] == '-') and (t[i + 1] == '.') and (t[i + 2] == '/')) 
		{
			cout << "n";
			i = i + 2;
		}
		if ((t[i] == '-') and (t[i + 1] == '-') and (t[i + 2] == '-') and (t[i + 3] == '/')) 
		{
			cout << "o";
			i = i + 3;
		}
		if ((t[i] == '.') and (t[i + 1] == '-') and (t[i + 2] == '-') and (t[i + 3] == '.') and (t[i + 4] == '/')) 
		{
			cout << "p";
			i = i + 4;
		}
		if ((t[i] == '-') and (t[i + 1] == '-') and (t[i + 2] == '.') and (t[i + 3] == '-') and (t[i + 4] == '/')) 
		{
			cout << "q";
			i = i + 4;
		}
		if ((t[i] == '.') and (t[i + 1] == '-') and (t[i + 2] == '.') and (t[i + 3] == '/')) 
		{
			cout << "r";
			i = i + 3;
		}
		if ((t[i] == '.') and (t[i + 1] == '.') and (t[i + 2] == '.') and (t[i + 3] == '/')) 
		{
			cout << "s";
			i = i + 3;
		}
		if ((t[i] == '-') and (t[i + 1] == '/')) 
		{
			cout << "t";
			i = i + 1;
		}
		if ((t[i] == '.') and (t[i + 1] == '.') and (t[i + 2] == '-') and (t[i + 3] == '/')) 
		{
			cout << "u";
			i = i + 3;
		}
		if ((t[i] == '.') and (t[i + 1] == '.') and (t[i + 2] == '.') and (t[i + 3] == '-') and (t[i + 4] == '/')) 
		{
			cout << "v";
			i = i + 4;
		}
		if ((t[i] == '.') and (t[i + 1] == '-') and (t[i + 2] == '-') and (t[i + 3] == '/')) 
		{
			cout << "w";
			i = i + 3;
		}
		if ((t[i] == '-') and (t[i + 1] == '.') and (t[i + 2] == '.') and (t[i + 3] == '-') and (t[i + 4] == '/')) 
		{
			cout << "x";
			i = i + 4;
		}
		if ((t[i] == '-') and (t[i + 1] == '.') and (t[i + 2] == '-') and (t[i + 3] == '-') and (t[i + 4] == '/')) 
		{
			cout << "y";
			i = i + 4;
		}
		if ((t[i] == '-') and (t[i + 1] == '-') and (t[i + 2] == '.') and (t[i + 3] == '.') and (t[i + 4] == '/')) 
		{
			cout << "z";
			i = i + 4;
		}
		if ((t[i] == '/') and t[i + 1] == '/') cout << " ";
        }
}
