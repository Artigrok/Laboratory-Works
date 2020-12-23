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
		cout << "Введите элемент с индексом " << i <<": ";
		cin >> a[i];
	}
	for (i = 0; i <= N / 2; i++)
	{	
		if (a[i] != a[N - 1 - i])
		{
			cout << a[i] << " " << a[N - 1 - i] << " ";
		}
		else
			cout << a[i];
	}
}