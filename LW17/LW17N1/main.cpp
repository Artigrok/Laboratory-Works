#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int K, L, N, i, c;
	float S, SAr;
	S = 0;
	c = 0;
	cout << "������� �������� N: ";
	cin >> N;
	int* a = new int[N];
	for (i = 0; i < N; i++)
	{
		cout << "������� �������� �������� � �������� " << i <<": ";
		cin >> a[i];
	}
	cout << "������� �������� K � L ����� ������: ";
	cin >> K >> L;
	while (K <= L)
	{
		S += a[K-1];
		c++;
		K++;
	}
	SAr = S / c;
	cout << "�����: " << SAr;
}