#include <iostream>;
#include <math.h>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double x1, x2, y1, y2, x3, y3, a, b, c, P, p;
	cout << "¬ведите значение x1: ";
	cin >> x1;
	cout << "¬ведите значение y1: ";
	cin >> y1;
	cout << "¬ведите значение x2: ";
	cin >> x2;
	cout << "¬ведите значение y2: ";
	cin >> y2;
	cout << "¬ведите значение x3: ";
	cin >> x3;
	cout << "¬ведите значение y3: ";
	cin >> y3;
	a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	P = a + b + c;
	p = P / 2;
	cout << "ѕериметр треугольника равен: " << (P) << endl;
	cout << "ѕлощадь пр€моугольника (по формуле √ерона) равна:" << (sqrt(p * (p - a) * (p - b) * (p - c))) << endl;
}