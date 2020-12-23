#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int N, i;
	cout << "¬ведите значение N: ";
	cin >> N;
	int* a = new int[N];
	for (i = 0; i < N; i++)
	{
		cout << "¬ведите значение элемента с индексом " << i << ": ";
		cin >> a[i];
	}
	for (i = N-2; i >= 0; i--)
	{
		if (i == 0)
		{
			cout << "Ћокальные максимумы отсутствуют";
			break;
		}
		if (a[i] > a[i + 1] and (a[i] > a[i - 1]))
		{
			cout << "ќтвет(индекс, номер): " << i << " " << i + 1;
			break;
		}
	}
}