#include <iostream>;
using namespace std;
float RingS(float R1, float R2)
{
	float P;
	P = (R1 * R1 * 3.14)  -  (R2 * R2 * 3.14);
	return P;
}
int main()
{
	setlocale(LC_ALL, "ru");
	float R1, R2;
	int i;
	for (i = 1; i <= 3; i++)
	{
		cout << "������� �������� R1 � R2 ����� ������ ������ �" << i << endl;
		cin >> R1 >> R2;
		cout << "������� ������ �" << i << " �����: " << RingS(R1, R2) << endl;
	}
}