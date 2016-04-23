#include "bundle.hpp"

void armstrong(char *x)
{
	int n, T[100];
	signed int i, sum ;
	string number = x;
    	i=0;
    	for(n=number.length();n>0;n--)
    	{
        	T[i]=number[i]-48;
        	i++;
    	}
    	n=number.length();
    	for(i=0;i<n;i++)
    	{
        	sum=sum+pow(T[i],n);
        	if(n==1) cout << number << " is not Armstrong number" << endl;
        	else if(sum==atoi(number.c_str())) cout << number << " is Armstrong number" << endl;
    	}
    	if(sum!=atoi(number.c_str())) cout << number << " is not Armstrong number" << endl;
}
