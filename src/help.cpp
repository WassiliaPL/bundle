#include "bundle.hpp"

void help ()
{
	cout << "Usage:\n"
	     << "\tbundle [OPTION] <ARGUMENT> <ARGUMENT> ...\n"
	     << "\nOptions and needed arguments:\n"
	     << "\t-h, --help\t\tShow this help message\n"
	     << "\t-p, --primenumbers\tReturns prime numbers from 2 to defined range "
	     << "<INTEGER NUMBER>\n"
	     << "\t-f, --factorial\t\tReturns a factorial of given number "
	     << "<INTEGER NUMBER>\n"
	     << "\t-d, --decimal2all\tConverts given number from decimal to defined numeral system "
	     << "<DECIMAL NUMBER> <TARGET SYSTEM BASE NUMBER>\n"
	     << "\t-a, --all2decimal\tConverts given number from defined numeral system to decimal "
	     << "<NUMBER> <SYSTEM BASE NUMBER>\n"
	     << "\t-s, --schedule\t\tReturns prime factors of given number "
	     << "<INTEGER NUMBER>\n"
	     << "\t-e, --exponentiation\tReturns the value of a number to the definded exponent "
	     << "<BASE NUMBER> <EXPONENT VALUE>\n"
	     << "\t-cd, --caesardecode\tDecodes given string from Caesar Cipher "
	     << "<CODE> <CODE> ...\n"
	     << "\t-ce, --caesarencode\tEncodes given string to Caesar Cipher "
	     << "<WORD> <WORD> ...\n"
	     << "\t-md, --morsedecode\tDecodes given string from Morse "
	     << "<CODE>\n"
	     << "\t-me, --morseencode\tEncodes given string to Morse "
	     << "<WORD> <WORD> ...\n"
	     << "\t-b, --bubblesort\tSorts given numbers "
	     << "<INTEGER NUMBER> <INTEGER NUMBER> ...\n"
	     << "\t-m, --minmax\t\tFinds maximum and minimum in given numbers "
	     << "<INTEGER NUMBER> <INTEGER NUMBER> ...\n"
	     << "\t-n, --fibonacci\t\tReturns fibonacci sequence "
	     << "<INTEGER NUMBER>\n"
	     << "\t-eu, --euklides\t\tReturns the greatest common divisor of two numbers "
	     << "<INTEGER NUMBER> <INTEGER NUMBER>\n"
	     << "\t-r, --readfile\t\tPrint file's content "
	     << "<PATH TO EXISTING FILE>\n"
	     << "\t-w, --writetofile\tAppends given string in new line to specified file (you can add '\\n' at the beginning or ending of string to create newline "
	     << "<STRING IN DOUBLE QUOTES> <PATH TO EXISTING FILE>\n"
	     << "\t-ff, --findinfile\tFind given string in file "
	     << "<STRING IN DOUBLE QUOTES> <PATH TO EXISTING FILE>\n"
	     << "\t-ar, --armstrong\tCheck if a number is Armstrong number "
	     << "<INTEGER NUMBER>\n"
	     << "\t-pd, --palindrome\tCheck if a word is a palindrome "
	     << "<WORD>\n"
	     << "\nManufactured by \e[1mdawidd6\e[0m and \e[1mWassiliaPL\e[0m\n";
}
