#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int N;
	cout << "������� �������� N: ";
	cin >> N;
	int K = 0;
	int S = 0;
	while (S < N)
	{
		S += K;
		K++;
	}
	cout << "�������� ����� �����: " << S << endl;
	cout << "�������� ����������� � �����: " << K-1;
}