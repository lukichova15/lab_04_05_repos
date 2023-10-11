// Lab_04_5.cpp
// Лукічова Катерина
// Лабораторна робота No 4.5
// «Попадання» у плоску фігуру
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;
	cout << "R = "; cin >> R;
	srand((unsigned)time(NULL));
	for (int i = 0; i<10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if ((y >= 0 && y <= R && x <= 0 && x >= -R
			&& (x + R)*(x + R) + (y - R)*(y - R) >= R*R)
			|| (x >= 0 && x <= R && y <= 0 && y >= -R
			&& (x - R)*(x - R) + (y + R)*(y + R) >= R*R))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
	for (int i = 0; i<10; i++)
	{
		x = -R + rand() * (R + R) / RAND_MAX;
		y = -R + rand() * (R + R) / RAND_MAX;
		if ((y >= 0 && y <= R && x <= 0 && x >= -R
			&& (x + R)*(x + R) + (y - R)*(y - R) >= R*R)
			|| (x >= 0 && x <= R && y <= 0 && y >= -R
			&& (x - R)*(x - R) + (y + R)*(y + R) >= R*R))
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	cin >> R;
	return 0;
}
