#include <iostream>�
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	bool z, min, max;
	int i, j, n, xmax, xmin;
	cout << "������� �������� N: ";
	cin >> n;
	int* r = new int[n + 2];
	xmax = 0;
	xmin = 0;
	z = 0;	min = 0; max = 0;
	cout << "������� �������� ��������� ������� �:" << endl;
	int* a = new int[n];
	for (i = 0; i < n; i++)
	{
		cout << "�������� A[" << i << "]: ";
		cin >> a[i];
		if (a[xmax] < a[i])
			xmax = i;
		if (a[xmin] > a[i])
			xmin = i;
	}
	j = 0;
	i = 0;
	while (j < n + 2)
	{
		if (i == xmin && min == 0)
		{
			r[j] = 0;
			j++;
			min = 1;
		}
		else if (min == 1)
		{
			min = 0;
			r[j] = a[i];
			i++;
			j++;
		}
		else if (i == xmax)
		{
			z = 1;
			r[j] = a[i];
			i++;
			j++;
		}
		else if (z == 1)
		{
			r[j] = 0;
			j++;
			z = 0;
		}
		else
		{
			r[j] = a[i];
			i++;
			j++;
		}
	}
	cout << "�����: ";
	for (i = 0; i < n + 2; i++) cout << r[i] << " ";

}