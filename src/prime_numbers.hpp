void prime_numbers (char *x) //liczby_pierwsze
{
	int N = atoi(x), temp, j, i;
	for (i=2; i<=N; i++)
	{
		temp = 0;
		for (j=1; j<=N; j++) if (i % j == 0) temp = temp + j;
		if (temp == i + 1) cout << "prime number: " << i << endl;
	}
}
