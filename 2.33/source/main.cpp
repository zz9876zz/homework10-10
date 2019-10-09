#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e, num;
	cout << "input your Total miles driven per day\n";
	cin >> a;
	cout << "input your Cost per gallon of gasoline\n";
	cin >> b;
	cout << "input your Average miles per gallon\n";
	cin >> c;
	cout << "input your Parking fees per day\n";
	cin >> d;
	cout << "input your Tolls per day\n";
	cin >> e;
	num = b * (a / c) + d + e;
	cout << "Your cost per day of driving to work:" << num;

	system("pause");
	return 0;
}
