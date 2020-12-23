#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int N, K, Fk, ch1, ch2;
	cout << "Введите значение числа Фибоначчи: ";
	cin >> N;
	K = 2;
	ch1 = 0;
	ch2 = 1;
	Fk = 1;
	while (Fk != N)
	{
		Fk = ch2 + ch1;
		ch1 = ch2;
		ch2 = Fk;
		K++;
	}
	cout << "Значение К равно: " << K;
}