#include <iostream>
#include <cstdlib>

using namespace std;

#include "src/dec2all.hpp"
#include "src/factorial.hpp"
#include "src/prime_numbers.hpp"
#include "src/help.hpp"
#include "src/schedule.hpp"
#include "src/exponentiation.hpp"
#include "src/caesar_cipher.hpp"
#include "src/morse.hpp"

int main (int argc, char *argv[])
{
	if (argc == 1) help();
	else
	{
		string arg = argv[1];
		if ((arg == "-h") or (arg == "--help")) help();
		else if ((arg == "-p") or (arg == "--primenumbers")) prime_numbers (argv[2]);
		else if ((arg == "-f") or (arg == "--factorial")) factorial (argv[2]);
		else if ((arg == "-d2a") or (arg == "--decimal2all")) dec2all (argv[2], argv[3]);
		else if ((arg == "-s") or (arg == "--schedule")) schedule (argv[2]);
		else if ((arg == "-e") or (arg == "--exponentiation")) exponentiation (argv[2], argv[3]);
		else if ((arg == "-cd") or (arg == "--caesardecode"))
		{
			for (int i = 2; i<argc; i++) caesar_decode (argv[i]);
			cout << endl;
		}
		else if ((arg == "-ce") or (arg == "--caesarencode"))
		{
			for (int i = 2; i<argc; i++) caesar_encode (argv[i]);
			cout << endl;
		}
		else if ((arg == "-me") or (arg == "--morseencode"))
		{
			for (int i = 2; i<argc; i++) morse_encode (argv[i]);
			cout << endl;
		}
		else if ((arg == "-md") or (arg == "--morsedecode"))
		{
			for (int i = 2; i<argc; i++) morse_decode (argv[i]);
			cout << endl;
		}
	}
}
