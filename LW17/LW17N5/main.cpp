#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int N, i, j;
	cout << "������� �������� N: ";
	cin >> N;
	int* a = new int[N];
	for (i = 0; i < N; i++)
	{
		cout << "������� �������� �������� � �������� " << i << ": ";
		cin >> a[i];
	}
	for (i = 0; i < N; i++)
	{
		for (j = i + 1; j < N; j++)
		{
			if (a[i] == a[j])
				cout << "�����(������): " << i << " " << j ;
		}
	}
}