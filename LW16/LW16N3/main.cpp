#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int N, A, B, i;
	cout << "������� ��������� N, A, B ����� ������: ";
	cin >> N >> A >> B;
	int* a = new int[N];
	cout << "�����: ";
	a[0] = A;
	a[1] = B;
	cout << a[0] << " " << a[1] << " ";
	for (i = 2; i < N; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
		cout << a[i] << " ";
	}
}