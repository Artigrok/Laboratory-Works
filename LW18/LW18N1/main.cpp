#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int i, N, s;
	cout << "������� �������� N: ";
	cin >> N;
	cout << "������� �������� ��������� ������� �:" << endl;
	int* A = new int[N];
	for (i = 0; i < N; i++)
	{
		cout << "�������� A[" << i << "]: ";
		cin >> A[i];
	}
	cout << "������� �������� ��������� ������� �:" << endl;
	int* B = new int[N];
	for (i = 0; i < N; i++)
	{
		cout << "�������� B[" << i << "]: ";
		cin >> B[i];
	}
	for (i = 0; i < N; i++)
	{
		s = B[i];
		B[i] = A[i];
		A[i] = s;
	}
	for (i = 0; i < N; i++) cout << A[i];
	cout << endl;
	for (i = 0; i < N; i++) cout << B[i];
}