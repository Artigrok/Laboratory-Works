#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	string o, d, t, ch, nech;
	int x;
	o = "����������� ";
	d = "���������� ";
	t = "����������� ";
	ch = "������ ";
	nech = "�������� ";
	cout << "������� �������� �����: ";
	cin >> x;
	if (x % 2 == 0) cout << ch;
	if (x % 2 != 0) cout << nech;
	if (x / 10 == 0) cout << o;
	if ((x / 10 > 0) and (x / 10 < 10)) cout << d;
	if (x / 100 > 0) cout << t;
	cout << "�����.";
}