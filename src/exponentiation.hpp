void exponentiation (char *x, char *y)
{
	int i = atoi(y), r = 1;
	if (atoi(y) == 0) cout << atoi(x) << " ^ " << atoi(y) << " = 1" << endl;
	else if (atoi(y) == 1) cout << atoi(x) << " ^ " << atoi(y) << " = " << atoi(x) << endl;
	else
	{
		while (i != 0)
		{
			r = r * atoi(x);
			i--;
		}
		cout << atoi(x) << " ^ " << atoi(y) << " = " << r << endl;
	}
}
