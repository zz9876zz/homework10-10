#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

int main()
{

	float w, h, bmi;
	cout << "input weight(kg) and height(meters)\n";
	cin >> w >> h;
	bmi = w / pow(h, 2);
	cout << "Your BMI is " << bmi << "\n" << "Result:";
	if (bmi < 18.5)
	{
		cout << "Underweight";
	}
	else if (bmi > 18.5 && bmi < 24.9)
	{
		cout << "Normal";
	}
	else if (bmi > 25 && bmi < 29.9)
	{
		cout << "Overweight";
	}
	else if (bmi > 30)
	{
		cout << "Obese";
	}

	system("pause");
	return 0;
	
}