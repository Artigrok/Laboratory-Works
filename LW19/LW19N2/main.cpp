#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int n, i, j, x, k;
	cout << "������� �������� N: ";
	cin >> n;
	int* r = new int[n];
	cout << "������� �������� ��������� ������� �:" << endl;
	int* a = new int[n];
	for (i = 0; i < n; i++)
	{
		cout << "�������� A[" << i << "]: ";
		cin >> a[i];
	}
	k = 0;
	for (i = 0; i < n; i++)
	{
		x = 0;
		for (j = 0; j < n; j++)
		{
			if (a[i] == a[j])
				x++;
		}
		if (x != 2)
		{
			r[k] = a[i];
			k++;
		}
	}
	cout << "������ ������ ������� �����: " << k << endl;
	cout << "��������: ";
	for (i = 0; i < k; i++) cout << r[i] << " ";

}