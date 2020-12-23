#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int N, i, j;
	cout << "Введите значение N: ";
	cin >> N;
	int* a = new int[N];
	for (i = 0; i < N; i++)
	{
		cout << "Введите значение элемента с индексом " << i << ": ";
		cin >> a[i];
	}
	for (i = 0; i < N; i++)
	{
		for (j = i + 1; j < N; j++)
		{
			if (a[i] == a[j])
				cout << "Ответ(индекс): " << i << " " << j ;
		}
	}
}