#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int A, D, N, i;
	cout << "������� A, D, N ����� ������: ";
	cin >> A >> D >> N;
	int* a = new int[N];
	a[0] = A;
	cout << "�����: " << a[0] << " ";
	for (i = 1; i < N; i++)
	{
		a[i] = a[i - 1] * D;
		cout << a[i] << " ";
	}
}