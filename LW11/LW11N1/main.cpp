#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int A, B;
	cout << "������� �������� ���������� �: ";
	cin >> A;
	cout << "������� �������� ���������� B: ";
	cin >> B;
	if (A==B)
	{
		A = 0;
		B = 0;
		cout << "�������� ���������� � �����: "<< A<< endl;
		cout << "�������� ���������� � �����: "<< B;
	}
	else
	{
		if (A > B) B = A;
		else A = B;
		cout << "�������� ���������� � �����: " << A << endl;
		cout << "�������� ���������� � �����: " << B;
	}
}