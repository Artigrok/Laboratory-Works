#include <iostream>;
#include <string>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	string c[] = { "�������", "�������","������", "�����" ,"������", "��������", "��������","�������", "������" ,"�������" };
	string z[] = { "�����", "������", "�����", "�����", "�������", "����", "������", "����", "��������", "������", "������" , "������" };
	int i;
	cout << "������� ������ ��� ���: ";
	cin >> i;
	cout << i << " ��� - ��� ��� ";
	if ((i - 4) % 12 > 1 and (i - 4) % 12 < 5)
	{
		cout << c[(((i - 4) % 60) / 12)+5] << " " << z[(i - 4) % 12];
	}
	else
	{
		cout << c[((i - 4) % 60) / 12] << " " << z[(i - 4) % 12];
	}
}