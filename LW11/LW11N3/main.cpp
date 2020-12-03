#include <iostream>;
#include <math.h>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int Ax, Ay, Bx, By, Cx, Cy, AB, AC;
	cout << "Введите значение точки А (по оси х и y через пробел): ";
	cin >> Ax >> Ay;
	cout << "Введите значение точки B (по оси х и y через пробел): ";
	cin >> Bx >> By;
	cout << "Введите значение точки C (по оси х и y через пробел): ";
	cin >> Cx >> Cy; 
	AB = sqrt(pow((Bx-Ax),2)+ pow((By - Ay), 2));
	AC = sqrt(pow((Cx - Ax), 2) + pow((Cy - Ay), 2));
	if (AB<AC)
	{
		cout << "Точка В ближе, её координаты (по оси х и у соотв.) равны: " << Bx << " " << By << endl;
		cout << "Расстояние от А до В равно: " << AB;
	}
	else
	{
		cout << "Точка C ближе, её координаты (по оси х и у соотв.) равны: " << Cx << " " << Cy << endl;
		cout << "Расстояние от А до C равно: " << AC;
	}
}