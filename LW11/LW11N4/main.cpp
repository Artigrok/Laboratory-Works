#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int x, y;
	cout << "Введите значение точки (по оси х и y через пробел): ";
	cin >> x >> y;
	if ((x>0) and (y>0))
	{
		cout << "Точка в 1 четверти";
	}
	if ((x < 0) and (y > 0))
	{
		cout << "Точка в 2 четверти";
	}
	if ((x < 0) and (y < 0))
	{
		cout << "Точка в 3 четверти";
	}
	if ((x > 0) and (y < 0))
	{
		cout << "Точка в 4 четверти";
	}
	if ((x == 0) or (y == 0))
	{
		cout << "Нарушено условие задания";
	}
}