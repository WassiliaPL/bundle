void fileoutput (char *x)
{
	fstream file;
	string out;
	file.open(x, fstream::in);
	if (file.is_open())
	{
		while (!file.eof())
		{
			getline (file, out);
			cout << out << endl;
		}
	}
	else cout << "file doesn't exist" << endl;
	file.close();
}

