#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	cout << "input an integer\n";
	int a;
	cin >> a;
	if (a % 2 == 0)
	{
		cout << "\n" << a << " is even\n";
	}
	else
	{
		cout << "\n" << a << " is odd\n";
	}
	system("pause");
	return 0;
}
