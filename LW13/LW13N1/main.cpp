#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	float a;
	cout << "������� ���� 1 �� ������: ";
	cin >> a;
	int i;
	for ( i = 1; i <= 10; i++ )
	{
		cout << "���� " << i*0.1 << " �� ������ �����: " << a*i*0.1 << endl ;
	}
}