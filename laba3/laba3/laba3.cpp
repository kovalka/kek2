﻿

#include "pch.h"
#include <iostream>
#include <cmath> 

#define PI 3.14159265359
using namespace std;



int main()
{
	setlocale(LC_ALL, "ru");
	double x, y, z, z1;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;

	if (x < -20 && y < -10)
	{
		z1 = 2 / x - 4 / y;
		
	}
	else {
		if (x < 0 && y < 0)
		{
			z1 = (x - y - 2) / (x + y);

		}
		else{
			if (x < 2 * PI&&y < PI / 2)
			{

				z1 = (sin(x) + cos(x)) / cos(y);
			}else{
				


				z1 = log(pow(x,2)+pow(y,2))/log(4.0);
				
			}
		
		}
		z = z1;kek123
	}



	
	cout << "\n\n Z= " << z << "\n";
	system("pause");
}




