#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main(void)
{
	int a, b, c, x, y, z;
	std::cout << "input number 1~4 to choose graphics" << "\n";
	while (std::cin >> a)
	{
		if (a == 1)
		{
			for (int i = 0; i < 8; i++)
			{
				std::cout << "*";
			}
			for (int i = 0; i < 7; i++)
			{
				std::cout << "\n" << "*      *";
			}
			std::cout << "\n";
			for (int i = 0; i < 8; i++)
			{
				std::cout << "*";
			}
			std::cout << "\n" << "input number 1~4 to choose graphics" << "\n";
		}
		if (a == 2)
		{
			std::cout << "   ***   " << "\n";
			std::cout << " *     * " << "\n";
			for (int i = 0; i < 5; i++)
			{
				std::cout << "*       *";
				std::cout << "\n";
			}
			std::cout << " *     * " << "\n";
			std::cout << "   ***   " << "\n";
			std::cout << "input number 1~4 to choose graphics" << "\n";
		}
		if (a == 3)
		{
			std::cout << "  *  " << "\n";
			std::cout << " ***" << "\n";
			std::cout << "*****" << "\n";
			for (int i = 0; i <= 5; i++)
			{
				std::cout << "  *  ";
				std::cout << "\n";
			}
			std::cout << "input number 1~4 to choose graphics" << "\n";

		}
		if (a == 4)
		{
			x = 4;
			for (int i = 0; i <= 4; i++)
			{
				for (int k = 0; k < x; k++)
				{
					std::cout << " ";
				}
				std::cout << "*";
				if (i >= 1)
				{
					for (int j = 0; j < i + i - 1; j++)
					{
						std::cout << " ";
					}
					std::cout << "*";
				}
				std::cout << "\n";
				x--;
			}
			std::cout << " *     * " << "\n";
			std::cout << "  *   * " << "\n";
			std::cout << "   * * " << "\n";
			std::cout << "    * " << "\n";
			std::cout << "input number 1~4 to choose graphics" << "\n";
		}


	}
	system("pause");
	return 0;
}