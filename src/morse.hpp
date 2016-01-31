void morse_encode (char *x)
{
	string t = x;
	for (int i=0; i<t.length(); i++)
        {
		if (t[i] == 'a') cout << ".-/";
		if (t[i] == 'b') cout << "-.../";
		if (t[i] == 'c') cout << "-.-./";
		if (t[i] == 'd') cout << "-../";
		if (t[i] == 'e') cout << "./";
		if (t[i] == 'f') cout << "..-./";
		if (t[i] == 'g') cout << "--./";
		if (t[i] == 'h') cout << "..../";
		if (t[i] == 'i') cout << "../";
		if (t[i] == 'j') cout << ".---/";
		if (t[i] == 'k') cout << "-.-/";
		if (t[i] == 'l') cout << ".-../";
		if (t[i] == 'm') cout << "--/";
		if (t[i] == 'n') cout << "-./";
		if (t[i] == 'o') cout << "---/";
		if (t[i] == 'p') cout << ".--./";
		if (t[i] == 'q') cout << "--.-/";
		if (t[i] == 'r') cout << ".-./";
		if (t[i] == 's') cout << ".../";
		if (t[i] == 't') cout << "-/";
		if (t[i] == 'u') cout << "..-/";
		if (t[i] == 'v') cout << "...-/";
		if (t[i] == 'w') cout << ".--/";
		if (t[i] == 'x') cout << "-..-/";
		if (t[i] == 'y') cout << "-.--/";
		if (t[i] == 'z') cout << "--../";
		if (t[i] == ' ') cout << "/";
        }
        cout << "/";
}

void morse_decode (char *x)
{
	string t = x;
	for (int i=0; i<t.length(); i++)
        {
		if ((t[i] == '.') and (t[i + 1] == '-') and (t[i+2] == '/')) cout << "a";
		/*if (t[i] == 'b') cout << "-.../";
		if (t[i] == 'c') cout << "-.-./";
		if (t[i] == 'd') cout << "-../";
		if (t[i] == 'e') cout << "./";
		if (t[i] == 'f') cout << "..-./";
		if (t[i] == 'g') cout << "--./";
		if (t[i] == 'h') cout << "..../";
		if (t[i] == 'i') cout << "../";
		if (t[i] == 'j') cout << ".---/";
		if (t[i] == 'k') cout << "-.-/";
		if (t[i] == 'l') cout << ".-../";
		if (t[i] == 'm') cout << "--/";
		if (t[i] == 'n') cout << "-./";
		if (t[i] == 'o') cout << "---/";
		if (t[i] == 'p') cout << ".--./";
		if (t[i] == 'q') cout << "--.-/";
		if (t[i] == 'r') cout << ".-./";
		if (t[i] == 's') cout << ".../";
		if (t[i] == 't') cout << "-/";
		if (t[i] == 'u') cout << "..-/";
		if (t[i] == 'v') cout << "...-/";
		if (t[i] == 'w') cout << ".--/";
		if (t[i] == 'x') cout << "-..-/";
		if (t[i] == 'y') cout << "-.--/";
		if (t[i] == 'z') cout << "--../";
		if (t[i] == ' ') cout << "/";*/
        }
        cout << " ";
}
