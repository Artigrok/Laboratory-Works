#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double A, B, C;
	cout << "������� �������� A: ";
	cin >> A;
	cout << "������� �������� B: ";
	cin >> B;
	cout << "������� �������� C: ";
	cin >> C;
	cout << "������������ �������� AC � BC �����: "<< (abs(A - C) * abs(B - C)) << endl;
}