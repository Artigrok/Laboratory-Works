#include <iostream>;
using namespace std;
int Quarter(float x, float y)
{
	int N;
	if (x > 0 and y > 0)
	{
		N = 1;
	}
	if (x < 0 and y > 0)
	{
		N = 2;
	}
	if (x < 0 and y < 0)
	{
		N = 3;
	}
	if (x > 0 and y < 0)
	{
		N = 4;
	}
	return N;
}
int main()
{
	setlocale(LC_ALL, "ru");
	float x, y;
	cout << "������� �������� � � � ����� ������: ";
	cin >> x >> y;
	cout  << "����� ��������� � �������� ����� " << Quarter(x, y);
}