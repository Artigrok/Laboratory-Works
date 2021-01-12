#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int N, i;
	int ed = 0;
	cout << "Введите значение N: ";
	cin >> N;
	cout << "Введите значения элементов массива А:" << endl;
	int* A = new int[N];
	for (i = 0; i < N; i++)
	{
		cout << "Значение A[" << i << "]: ";
		cin >> A[i];
		if (A[i] % 2 == 1)
			ed = A[i];
	}
	cout << "Ответ: ";
	for (i = 0; i < N; i++)
	{
		if (A[i] % 2 == 1)
		{
			A[i] += ed;
		}
		cout << A[i] << " ";
	}
}