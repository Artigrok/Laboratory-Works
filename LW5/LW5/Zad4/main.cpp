#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double x1, x2, y1, y2;
	cout << "¬ведите значение x1: ";
	cin >> x1;
	cout << "¬ведите значение x2: ";
	cin >> x2;
	cout << "¬ведите значение y1: ";
	cin >> y1;
	cout << "¬ведите значение y2: ";
	cin >> y2;
	cout << "ѕлощадь пр€моугольника равна: " << (abs(y2 - y1) * abs(x2 - x1)) << endl;
	cout << "ѕериметр пр€моугольника равен: " << (2 * (abs(y2 - y1) + abs(x2 - x1))) << endl;
}