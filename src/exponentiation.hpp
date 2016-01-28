void exponentiation (char *x, char *y) //potegowanie
{
	int e = atoi(x), r, w = atoi(y);
	r = e;
	do
	{
		r = r * e;
		w--;
	}
	while (w > 1);
	cout << e << " ^ " << y << " = " << r << endl;
}
