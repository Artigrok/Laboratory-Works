#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int A, D, N, i;
	cout << "Введите A, D, N через пробел: ";
	cin >> A >> D >> N;
	int* a = new int[N];
	a[0] = A;
	cout << "Ответ: " << a[0] << " ";
	for (i = 1; i < N; i++)
	{
		a[i] = a[i - 1] * D;
		cout << a[i] << " ";
	}
}