#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int A, B;
	cout << "������� �������� � � � ����� ������: ";
	cin >> A >> B;
	while (A >= B)
	{
		A -= B;
	}
	cout << "�����: " << A;
}