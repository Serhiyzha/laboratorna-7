#include <iostream>
#include "algebra.h"

int main() {
	const int n = 2;
	algebra objects[n] = {};
	for (int i = 0; i < n; i++)
	{
		double a, b, c, d;
		std::cout << "Введіть a, b, c, d для об'єкта " << i + 1 << ": ";
		std::cin >> a >> b >> c >> d;
		objects[i].setValues(a, b, c, d);
	}

	for (int i = 0; i < n; i++)
	{
		try
		{
			double res = objects[i].Result();
			std::cout << "Результат для об'єкта " << i + 1 << ": " << res << std::endl;
		}
		catch (int e)
		{
			if (e == 1)
			{
				std::cout << "Помилка: Спроба обчислення квадратного кореня з від'ємного числа для об'єкта " << std::endl;
			}
			else if (e == 2)
			{
				std::cout << "Помилка: Спроба ділення на нуль для об'єкта " << std::endl;
			}
		}
	}
}