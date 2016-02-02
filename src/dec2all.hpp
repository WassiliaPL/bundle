void dec2all (char *x, char *y) //dziesietny na inny
{
	int d = atoi(x), k = atoi(y), output[100];
	int temp = d, j, i = 0;
	do
	{
		output[i] = temp%k;
		temp = temp/k;
		i++;
	}
	while (temp > 0);
	j = i;
	cout << d << "(10)" << " = ";
	for (i=j-1; i>=0; i--)
	{
		if (output[i] == 10) cout << "A";
		else if (output[i] == 11) cout << "B";
		else if (output[i] == 12) cout << "C";
		else if (output[i] == 13) cout << "D";
		else if (output[i] == 14) cout << "E";
		else if (output[i] == 15) cout << "F";
		else
		cout << output[i];
	}
	cout << "(" << k << ")" << endl;
}
