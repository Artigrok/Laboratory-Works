#include <iostream>;
#include <math.h>;
using namespace std;
int main ()
{
	setlocale(LC_ALL, "Russian");
	double x1, x2, y1, y2;
	cout << "Введите значение x1: ";
	cin >> x1;
	cout << "Введите значение x2: ";
	cin >> x2;
	cout << "Введите значение y1: ";
	cin >> y1;
	cout << "Введите значение y2: ";
	cin >> y2;
	cout << "Расстояние между точками равно: " <<(sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2))) << endl;
}