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
	cout << "������� AC �����: " << abs(A - C) << endl;
	cout << "������� BC �����: " << abs(B - C) << endl;
	cout << "����� �������� �����: " << (abs(A - C) + abs(B - C)) << endl;
}