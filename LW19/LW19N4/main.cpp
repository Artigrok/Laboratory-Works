#include <iostream>;
using namespace std;
int main() 
{
	setlocale(LC_ALL, "ru");
	int i, j, n, q, h;
	bool z;
	z = 0; h = 0;
	cout << "Введите значение N: ";
	cin >> n;
	cout << "Введите значения элементов массива А:" << endl;
	int* a = new int[n];
	for (i = 0; i < n; i++)
	{
		cout << "Значение A[" << i << "]: ";
		cin >> a[i];
		if (a[i] < 0)
			h++;
	}
		q = h + n;
	int* r = new int[q];
	j = 0;
	i = 0;
	while (q > j)
	{
		if (a[i] < 0 and z == 0)
		{
			r[j] = a[i];
			z = 1;
			j++;
		}
		else if (a[i] < 0 and z == 1)
		{
			r[j] = 0;
			j++;
			i++;
			z = 0;
		}
		else if (a[i] >= 0)
		{
			r[j] = a[i];
			i++;
			j++;
		}
	}
	cout << "Ответ: ";
	for (i = 0; i < q; i++) cout << r[i] << " ";
}