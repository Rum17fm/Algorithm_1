#include <iostream>

using namespace std;
void main()
{
	int n,i,x,y,shet;
	cin >> n;
	char a[n];
	x = 0;
	y = 0;
	for(i = 0; i < a; i++)
	{
		cin >> a[i];
	}
	for(i=0; i<a; i++)
	{	if (a[i] == 'R')
		{
			x = x + 1;
		}
		if (a[i] == 'U')
		{
			y = y + 1;
		}
		if(x == y)
		{
			shet = shet + 1;
		}
		cout << shet << endl;
		return 0

	}






