#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int N, xM, xm, i;
	xM = 0;
	xm = 0;
	cout << "������� �������� N: ";
	cin >> N;
	cout << "������� �������� ��������� ������� �:" << endl;
	int* A = new int[N];
	for (i = 0; i < N; i++)
	{
		cout << "�������� A[" << i << "]: ";
		cin >> A[i];
		if (A[xM] < A[i]) xM = i;
		if (A[xm] > A[i]) xm = i;
	}
	if (xM > xm)
		for (i = xm + 1; i < xM; i++) A[i] = 0;
	else
		for (i = xM + 1; i < xm; i++) A[i] = 0;
	cout << "�����: ";
	for (i = 0; i < N; i++)
		cout << A[i] << " ";
}
