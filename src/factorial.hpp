void factorial (char *x) //silnia
{
	int s = atoi(x), y = 1;
	while (s > 1)
	{
		y = y * s;
		s--;
	}
	cout << atoi(x) << "! = " << y << endl;
}