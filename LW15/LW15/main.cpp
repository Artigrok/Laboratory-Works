#include <iostream>;
using namespace std;
float PowerA3(float A)
{
	float B;
	B = A * A * A;
	return B;
}
int main()
{
	setlocale(LC_ALL, "ru");
	float a;
	int i;
	cout << "������� �������� 5 ����� (����������, ����� enter)" << endl;
	for (i = 1; i <= 5; i++)
	{
		cin >> a;
		a = PowerA3(a);
		cout << "��������� ����� � 3 ������� ���������: " << a << endl;
	}
}