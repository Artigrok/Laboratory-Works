#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	string po,nu,ot,ch,nech;
	int x;
	po = "������������� ";
	nu = "������� ";
	ot = "������������� ";
	ch = "������ ";
	nech = "�������� ";
	cout << "������� �������� �����: ";
	cin >> x;
	if (x > 0) cout << po;
	if (x == 0) cout << nu;
	if (x < 0) cout << ot;
	if (x % 2 == 0) cout << ch;
	if (x % 2 != 0) cout << nech;
	cout << "�����.";
}