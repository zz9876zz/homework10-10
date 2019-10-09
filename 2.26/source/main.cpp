#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "input 2 integers\n";
	cin >> a >> b;
	if (a%b == 0)
	{
		c = a / b;
		cout << a << " is " << c << " times of " << b << "\n";
	}
	else
	{
		cout << a << " not a multiple of  " << b << "\n";
	}

	system("pause");
	return 0;
}

