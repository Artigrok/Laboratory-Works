#include <iostream>;
using namespace std;
float Fact2(int N)
{
	int FN, i;
	if (N % 2 != 0)
	{
		FN = 1;
		for (i = 3; i <= N; i += 2)
		{
			FN *= i;
		}
	}
	if (N % 2 == 0)
	{
		FN = 2;
		for (i = 4; i <= N; i += 2)
		{
			FN *= i;
		}
	}
	return FN;
}
int main()
{
	setlocale(LC_ALL, "ru");
	int N;
	cout << "Введите значение N: ";
	cin >> N;
	cout << "Двойной факториал числа N равен: " << Fact2(N);
}