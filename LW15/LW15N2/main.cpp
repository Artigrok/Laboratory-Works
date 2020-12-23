#include <iostream>;
using namespace std;
int Sign(float X)
{
	if (X > 0)
	{
		X = 1;
	}
	if (X < 0)
	{
		X = -1;
	}
	if (X == 0)
	{
		X = 0;
	}
	return X;
}
int main()
{
	setlocale(LC_ALL, "ru");
	float A, B;
	cout << "Введите значения А и В через пробел: ";
	cin >> A >> B;
	cout << "Значение выражения равно: " << Sign(A) + Sign(B);
}