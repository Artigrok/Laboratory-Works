#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int A, B;
	cout << "Введите значение переменной А: ";
	cin >> A;
	cout << "Введите значение переменной B: ";
	cin >> B;
	if (A==B)
	{
		A = 0;
		B = 0;
		cout << "Значение переменной А равно: "<< A<< endl;
		cout << "Значение переменной В равно: "<< B;
	}
	else
	{
		if (A > B) B = A;
		else A = B;
		cout << "Значение переменной А равно: " << A << endl;
		cout << "Значение переменной В равно: " << B;
	}
}