#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int N, S, i, j;
	cout << "������� �������� N: ";
	cin >> N;
	cout << "������� �������� ��������� ������� �:" << endl;
	int* A = new int[N];
	for (i = 0; i < N; i++)
	{
		cout << "�������� A[" << i << "]: ";
		cin >> A[i];
	}
	int* B = new int[N];
	for (i = 0; i < N; i++)
	{
		S = 0;
		for (j = 0; j <= i; j++)
		{
			S += A[j];
		}
		B[i] = S / (i + 1);
	}
	for (i = 0; i < N; i++) cout << B[i] << " ";
}