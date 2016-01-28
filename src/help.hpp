void help () //pomoc
{
	cout << "Options:\n"
	     << "\t-h, --help\t\tShow this help message\n"
	     << "\t-p, --prime\t\tReturns prime numbers from 2 to defined range\n"
	     << "\t-f, --factorial\t\tReturns a factorial of given number\n"
	     << "\t-d, --decimal2all\tConverts given number to defined numeral system\n"
	     << "\t-s, --schedule\t\tReturns prime factors of given number\n"
	     << "\t-e, --exponentiation\tReturns the value of a number to the definded exponent\n"
	     << "\nUsage:\n"
	     << "\t-p, --prime\t\t<one argument>\n"
	     << "\t-f, --factorial\t\t<one argument>\n"
	     << "\t-d, --decimal2all\t<first argument is decimal value> <second argument is target system base>\n"
	     << "\t-f, --factorial\t\t<one argument>\n"
	     << "\t-e, --exponentiation\t<first argument is base value> <second argument is exponent value>\n";
}
