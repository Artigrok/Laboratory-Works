#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int x, y;
	cout << "������� �������� ����� (�� ��� � � y ����� ������): ";
	cin >> x >> y;
	if ((x>0) and (y>0))
	{
		cout << "����� � 1 ��������";
	}
	if ((x < 0) and (y > 0))
	{
		cout << "����� � 2 ��������";
	}
	if ((x < 0) and (y < 0))
	{
		cout << "����� � 3 ��������";
	}
	if ((x > 0) and (y < 0))
	{
		cout << "����� � 4 ��������";
	}
	if ((x == 0) or (y == 0))
	{
		cout << "�������� ������� �������";
	}
}