#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double x1, x2, y1, y2;
	cout << "������� �������� x1: ";
	cin >> x1;
	cout << "������� �������� x2: ";
	cin >> x2;
	cout << "������� �������� y1: ";
	cin >> y1;
	cout << "������� �������� y2: ";
	cin >> y2;
	cout << "������� �������������� �����: " << (abs(y2 - y1) * abs(x2 - x1)) << endl;
	cout << "�������� �������������� �����: " << (2 * (abs(y2 - y1) + abs(x2 - x1))) << endl;
}