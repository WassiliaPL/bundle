#include "bundle.hpp"

void armstrong(char *x)
{
	int n, sum2, T[100];
	signed int i, sum ;
	string number = x;
    	i=0;
    	for(n=number.length();n>0;n--)
    	{
        	T[i]=number[i]-48;
        	i++;
    	}
    	n=number.length();
	cout << number << endl << n << endl;
    	for(i=0;i<n;i++)
    	{
		cout << i << endl;
        	sum=pow(T[i],n);
		sum2=sum2+sum;
		cout << sum << endl;
    	}
    	if(sum2==atoi(number.c_str())) cout << number << " is Armstrong number" << endl;
    	else cout << number << " is not Armstrong number" << endl;
}
