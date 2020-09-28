#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double A, B, C;
	cout << "Введите значение A: ";
	cin >> A;
	cout << "Введите значение B: ";
	cin >> B;
	cout << "Введите значение C: ";
	cin >> C;
	cout << "Произведение отрезков AC и BC равно: "<< (abs(A - C) * abs(B - C)) << endl;
}