#include <iostream>;
#include <math.h>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int Ax, Ay, Bx, By, Cx, Cy, AB, AC;
	cout << "������� �������� ����� � (�� ��� � � y ����� ������): ";
	cin >> Ax >> Ay;
	cout << "������� �������� ����� B (�� ��� � � y ����� ������): ";
	cin >> Bx >> By;
	cout << "������� �������� ����� C (�� ��� � � y ����� ������): ";
	cin >> Cx >> Cy; 
	AB = sqrt(pow((Bx-Ax),2)+ pow((By - Ay), 2));
	AC = sqrt(pow((Cx - Ax), 2) + pow((Cy - Ay), 2));
	if (AB<AC)
	{
		cout << "����� � �����, � ���������� (�� ��� � � � �����.) �����: " << Bx << " " << By << endl;
		cout << "���������� �� � �� � �����: " << AB;
	}
	else
	{
		cout << "����� C �����, � ���������� (�� ��� � � � �����.) �����: " << Cx << " " << Cy << endl;
		cout << "���������� �� � �� C �����: " << AC;
	}
}