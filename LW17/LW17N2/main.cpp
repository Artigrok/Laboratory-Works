#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int N, p, i;
	cout << "Введите значение N: ";
	cin >> N;
	int* a = new int[N];
	for (i = 0; i < N; i++)
	{
		cout << "Введите значение элемента с индексом " << i << ": ";
		cin >> a[i];
	}
	p = a[1] - a[0];
	for (i = 2; i < N; i++)
	{
		if (a[i] - a[i - 1] != p)
		{
			cout << "Ответ: " << 0;
			break;
		}
		if (i==(N-1))
		{
			cout << "Ответ: " << p; 
		}
	}
}