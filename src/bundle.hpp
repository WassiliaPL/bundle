#ifndef BUNDLE_INCLUDE
#define BUNDLE_INCLUDE
#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <fstream>
#include <math.h>

using namespace std;

unsigned long long hex2dec (string x);
int expo (int x, int y);
void all2dec (char *x, char *y);
void dec2all (char *x, char *y);
void caesar_encode (char *x);
void caesar_decode (char *x);
void euklides (char *x, char *y);
void exponentiation (char *x, char *y);
void factorial (char *x);
void fibonacci (char *x);
void fileinput (char *x, char *y);
void fileoutput (char *x);
void help ();
void min_max (int x[], int y);
void morse_encode (char *x);
void morse_decode (char *x);
void prime_numbers (char *x);
void schedule (char *x);
void sort (int x[], int y);
void filefind (char *x, char *y);
void armstrong(string x);
#endif
