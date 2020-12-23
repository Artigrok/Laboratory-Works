#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int i, c, N;
	cout << "Введите значение N: " ;
	cin >> N;
	int* a = new int[N];
	c = 1;
	cout << "Ответ: ";
	for (i = 0; i < N; i++)
	{
		a[i] = c;
		cout << a[i] << " ";
		c += 2;
	}
}