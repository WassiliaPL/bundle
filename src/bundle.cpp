#include "bundle.hpp"

int main (int argc, char *argv[])
{
	if (argc == 1) help();
	else
	{
		string arg = argv[1];
		if ((arg == "-h") or (arg == "--help")) help();
		else if ((arg == "-p") or (arg == "--primenumbers")) prime_numbers (argv[2]);
		else if ((arg == "-f") or (arg == "--factorial")) factorial (argv[2]);
		else if ((arg == "-d") or (arg == "--decimal2all")) dec2all (argv[2], argv[3]);
		else if ((arg == "-a") or (arg == "--all2decimal")) all2dec (argv[2], argv[3]);
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
		else if ((arg == "-b") or (arg == "--bubblesort"))
		{
			int t[argc];
			for (int i = 2; i<argc; i++) t[i - 2] = atoi(argv[i]);
			sort (t, argc-2);
			cout << endl;
		}
		else if ((arg == "-m") or (arg == "--minmax"))
		{
			int t[argc];
			for (int i = 2; i<argc; i++) t[i - 2] = atoi(argv[i]);
			min_max (t, argc-2);
			cout << endl;
		}
		else if ((arg == "-n") or (arg == "--fibonacci")) fibonacci (argv[2]);
		else if ((arg == "-eu") or (arg == "--euklides")) euklides (argv[2], argv[3]);
		else if ((arg == "-r") or (arg == "--readfile")) fileoutput (argv[2]);
		else if ((arg == "-w") or (arg == "--writetofile")) fileinput (argv[2], argv[3]);
		else if ((arg == "-ff") or (arg == "--findinfile")) filefind (argv[2], argv[3]);
		else
		{
			cout << "bundle: wrong argument\n" << "Write „bundle --help” for informations\n";
			return 1;
		}
	}
}
