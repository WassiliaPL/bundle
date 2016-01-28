#include <iostream>
#include <cstdlib>
//#include <locale>
using namespace std;

#include "src/dec2all.hpp"
#include "src/factorial.hpp"
#include "src/prime_numbers.hpp"
#include "src/help.hpp"

int main (int argc, char *argv[])
{
	//cout << "User-preferred locale setting is " << std::locale("").name().c_str() << '\n';
	if (argc == 1) help();
	else
	{
		string arg = argv[1];
		if ((arg == "-h") or (arg == "--help")) help();
		else if ((arg == "-p") or (arg == "--prime")) prime_numbers (argv[2]);
		else if ((arg == "-f") or (arg == "--factorial")) factorial (argv[2]);
		else if ((arg == "-d") or (arg == "--decimal2all")) dec2all (argv[2], argv[3]);
	}
}
