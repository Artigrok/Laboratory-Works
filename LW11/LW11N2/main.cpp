#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int A, B, C;
	cout << "������� �������� ���������� �: ";
	cin >> A;
	cout << "������� �������� ���������� B: ";
	cin >> B;
	cout << "������� �������� ���������� C: ";
	cin >> C;
	if (A < B)
	{
		if (A < C) A = 0;
		else C = 0;
	}
	else 
	{
		if (B < C) B = 0;
		else C = 0;
	}
	cout << "����� ���� ���������� ���������� �����: " << A + B + C;
}