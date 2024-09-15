// lab3.4.cpp
// Федина Михайло Андрійович
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 17
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if ((x * x + (y - R) * (y - R) <= R * R) && (x <= 0) && (y >= 0) || ((x - R) * (x - R) + (y + R) * (y + R) <= R * R) && (x >= 0) && (y <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}