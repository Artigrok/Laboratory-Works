#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int N, i, S;
	cout << "������� �������� N: ";
	cin >> N;
	cout << "������� �������� ��������� ������� �:" << endl;
	int* A = new int[N];
	for (i = 0; i < N; i++)
	{
		cout << "�������� A[" << i << "]: ";
		cin >> A[i];
	}
	i = 0;
	while ( (i + 1 < N) and (A[i+1] < A[i] ) )
	{
		S = A[i+1];
		A[i+1] = A[i];
		A[i] = S;
		i++;
	}
	cout << "�����: ";
	for (i = 0; i < N; i++)
		cout << A[i] << " ";
}