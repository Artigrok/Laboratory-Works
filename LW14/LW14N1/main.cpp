#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int N, A, B;
	cout << "������� �������� � � � ����� ������: ";
	cin >> A >> B;
	for (A; A <= B; A++)
	{
		for (N = 1; N <= A; N++)
		{
			cout << A;
		}
		cout << " ";// Dlya bolee ydobnoy proverki
	}
}