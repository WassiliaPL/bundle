void help () //pomoc
{
	cout << "Syntax:\n"
	     << "\tbundle [OPTION] [ARGUMENT] [ARGUMENT] ...\n"
	     << "\nOptions:\n"
	     << "\t-h, --help\t\tShow this help message\n"
	     << "\t-p, --primenumbers\tReturns prime numbers from 2 to defined range\n"
	     << "\t-f, --factorial\t\tReturns a factorial of given number\n"
	     << "\t-d, --decimal2all\tConverts given number to defined numeral system\n"
	     << "\t-s, --schedule\t\tReturns prime factors of given number\n"
	     << "\t-e, --exponentiation\tReturns the value of a number to the definded exponent\n"
	     << "\t-cd, --caesardecode\tDecodes given string from Caesar Cipher\n"
	     << "\t-ce, --caesarencode\tEncodes given string to Caesar Cipher\n"
	     << "\t-md, --morsedecode\tDecodes given string from Morse\n"
	     << "\t-me, --morseencode\tEncodes given string to Morse\n"
	     << "\nUsage:\n"
	     << "\t-p, --primenumbers\t[INTEGER NUMBER]\n"
	     << "\t-f, --factorial\t\t[INTEGER NUMBER]\n"
	     << "\t-d, --decimal2all\t[DECIMAL NUMBER] [SYSTEM BASE NUMBER]\n"
	     << "\t-s, --schedule\t\t[INTEGER NUMBER]\n"
	     << "\t-e, --exponentiation\t[BASE NUMBER] [EXPONENT VALUE]\n"
	     << "\t-cd, --caesardecode\t[WORD] [WORD] ...\n"
	     << "\t-ce, --caesarencode\t[CODE] [CODE] ...\n";
	     << "\t-md, --morsedecode\t[CODE]\n"
	     << "\t-me, --morseencode\t[WORD] [WORD] ...\n"
}
