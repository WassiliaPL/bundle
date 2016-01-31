void help () //pomoc
{
	cout << "Options:\n"
	     << "\t-h, --help\t\tShow this help message\n"
	     << "\t-p, --primenumbers\tReturns prime numbers from 2 to defined range\n"
	     << "\t-f, --factorial\t\tReturns a factorial of given number\n"
	     << "\t-d2a, --decimal2all\tConverts given number to defined numeral system\n"
	     << "\t-s, --schedule\t\tReturns prime factors of given number\n"
	     << "\t-e, --exponentiation\tReturns the value of a number to the definded exponent\n"
	     << "\t-cd, --caesardecode\tDecodes given string from Caesar Cipher\n"
	     << "\t-ce, --caesarencode\tEncodes given string to Caesar Cipher\n"
	     << "\nUsage:\n"
	     << "\t-p, --prime\t\t<one argument>\n"
	     << "\t-f, --factorial\t\t<one argument>\n"
	     << "\t-d, --decimal2all\t<first argument is decimal value> <second argument is target system base>\n"
	     << "\t-e, --exponentiation\t<first argument is base value> <second argument is exponent value>\n"
	     << "\t-cd, --caesardecode\t<first word> <second word> ...\n"
	     << "\t-ce, --caesarencode\t<first word> <second word> ...\n";
}
