#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int N, A, B, i;
	cout << "Введите знаачения N, A, B через пробел: ";
	cin >> N >> A >> B;
	int* a = new int[N];
	cout << "Ответ: ";
	a[0] = A;
	a[1] = B;
	cout << a[0] << " " << a[1] << " ";
	for (i = 2; i < N; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
		cout << a[i] << " ";
	}
}