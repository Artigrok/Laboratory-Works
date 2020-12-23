#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int A, B;
	cout << "Введите знначения А и В через пробел: ";
	cin >> A >> B;
	while (A != 0 and B != 0)
	{
		if (A > B)
		{
			A = A - B;
		}
		else
		{
			B = B - A;
		}
	}
	if (B == 0)
	{
		cout << A;
	}
	if (A == 0)
	{
		cout << B;
	}
}