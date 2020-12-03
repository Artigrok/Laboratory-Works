#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int A, B, C;
	cout << "Введите значение переменной А: ";
	cin >> A;
	cout << "Введите значение переменной B: ";
	cin >> B;
	cout << "Введите значение переменной C: ";
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
	cout << "Сумма двух наибольших переменных равна: " << A + B + C;
}