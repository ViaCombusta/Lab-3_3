#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

/**
* @brief ��/ 3 ���������� �������������� �������
* ������� 3 (������� 4)
* ��������� �������� ������� y=f(x) ��� ������������ x.
*/
int main() {
	setlocale(LC_ALL, "ru");
	const float a = 2.4;
	const float b = 8.3;
	double x;
	double y;
	cout << "������� ����� x";
	cin >> x;

	
	if (x <= -0.5)
	{
		y = pow(cos(pow((a * x), 2)), 3);

	}
	
	else
		if (x <= 5)
		{
			y = pow(sin(x), 2) + b / x;
		}
		else
			if (x > 5)
				y = pow(2 - pow(x, 2), 3);
	cout << "�������� ������� y = " << y;

}