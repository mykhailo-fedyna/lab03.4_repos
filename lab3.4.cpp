// lab3.4.cpp
// ������ ������� ���������
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 17
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// ������������ � ����� ����
	if ((x * x + (y - R) * (y - R) <= R * R) && (x <= 0) && (y >= 0) || ((x - R) * (x - R) + (y + R) * (y + R) <= R * R) && (x >= 0) && (y <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}