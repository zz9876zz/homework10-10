#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	int a, b, c, max, min, n;
	n = 5;
	cout << "input 3 integers\n";
	cin >> a >> b >> c;
	max = a;
	min = a;
	if (max < b)
	{
		max = b;
		if (max < c)
		{
			max = c;
		}
	}
	else if (max < c)
	{
		max = c;
	}
	if (min > b)
	{
		min = b;
		if (min > c)
		{
			min = c;
		}
	}
	else if (min > c)
	{
		min = c;
	}


	cout << "The largest number is " << max << "\n";
	cout << "The smallest number is " << min << "\n";

	system("pause");
	return 0;
}

