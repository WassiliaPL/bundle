void fileinput (char *x, char *y)
{
	fstream file;
	string txt = x;
	file.open(y, fstream::out | fstream::app);
	if (file.is_open())
	{
		file << "\n" + txt;
	}
	else cout << "file doesn't exist" << endl;
	file.close();
}
