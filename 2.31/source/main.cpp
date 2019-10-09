#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	cout << "number\tsquare\tcube\n";
	for (int i = 0; i <= 10; i++)
	{
		cout << pow(i, 1) << "\t" << pow(i, 2) << "\t" << pow(i, 3) << "\n";


	}
	system("pause");
	return 0;
}
