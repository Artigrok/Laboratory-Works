#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int N, i, S;
	cout << "Введите значение N: ";
	cin >> N;
	cout << "Введите значения элементов массива А:" << endl;
	int* A = new int[N];
	for (i = 0; i < N; i++)
	{
		cout << "Значение A[" << i << "]: ";
		cin >> A[i];
	}
	i = 0;
	while ( (i + 1 < N) and (A[i+1] < A[i] ) )
	{
		S = A[i+1];
		A[i+1] = A[i];
		A[i] = S;
		i++;
	}
	cout << "Ответ: ";
	for (i = 0; i < N; i++)
		cout << A[i] << " ";
}