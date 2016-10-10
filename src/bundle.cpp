#include "bundle.hpp"

int main (int argc, char *argv[])
{
	if (argc == 1) help();
	else
	{
		string arg = argv[1];
		if ((arg == "-h") or (arg == "--help")) help();
		else if (((arg == "-p") or (arg == "--primenumbers")) and (argc > 2) and (argc < 4)) prime_numbers (argv[2]);
		else if (((arg == "-f") or (arg == "--factorial")) and (argc > 2) and (argc < 4)) factorial (argv[2]);
		else if (((arg == "-d") or (arg == "--decimal2all")) and (argc > 3) and (argc < 5)) dec2all (argv[2], argv[3]);
		else if (((arg == "-a") or (arg == "--all2decimal")) and (argc > 3) and (argc < 5)) all2dec (argv[2], argv[3]);
		else if (((arg == "-s") or (arg == "--schedule")) and (argc > 2) and (argc < 4)) schedule (argv[2]);
		else if (((arg == "-e") or (arg == "--exponentiation")) and (argc > 3) and (argc < 5)) exponentiation (argv[2], argv[3]);
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
		else if (((arg == "-n") or (arg == "--fibonacci")) and (argc > 2) and (argc < 4)) fibonacci (argv[2]);
		else if (((arg == "-eu") or (arg == "--euklides")) and (argc > 3) and (argc < 5)) euklides (argv[2], argv[3]);
		else if (((arg == "-r") or (arg == "--readfile")) and (argc > 2) and (argc < 4)) fileoutput (argv[2]);
		else if (((arg == "-w") or (arg == "--writetofile")) and (argc > 3) and (argc < 5)) fileinput (argv[2], argv[3]);
		else if (((arg == "-ff") or (arg == "--findinfile")) and (argc > 3) and (argc < 5)) filefind (argv[2], argv[3]);
		else if (((arg == "-ar") or (arg == "--armstrong")) and (argc > 2) and (argc < 4)) armstrong (argv[2]);
		else if (((arg == "-pd") or (arg == "--palindrome")) and (argc > 2) and (argc < 4)) palindrome (argv[2]);
		else
		{
			cout << "bundle: wrong argument\n" << "Write „bundle --help” for informations\n";
			return 1;
		}
	}
	return 0;
}
