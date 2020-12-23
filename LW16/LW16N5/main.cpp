#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int i, N;
	cout << "Введите N: ";
	cin >> N;
	int* a = new int[N];
	for (i = 0; i < N; i++)
	{
		cout << "Введите элемент с индексом " << i << ": ";
		cin >> a[i];
	}
	for (i = 0; i < N; i++)
	{
		if (i % 2 == 0)
		{
			cout << a[i] << " ";
		}
	}
	for (i = N-1; i >= 0; i --)
	{
		if (i % 2 != 0)
		{
			cout << a[i] << " ";
		}
	}
}