#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int i, N, m;
	cout << "Введите значение N: ";
	cin >> N;
	int* a = new int[N];
	for (i = 0; i < N; i++)
	{
		cout << "Введите значение элемента с индексом " << i << ": ";
		cin >> a[i];
	}
	m = a[2];
	for (i = 2; i < N; i += 2)
	{
		if (a[i] < m)
		{
			m = a[i];
		}
	}
	cout << "Ответ: " << m;
}