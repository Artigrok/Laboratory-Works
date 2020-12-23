#include <iostream>;
using namespace std;
float PowerA3(float A)
{
	float B;
	B = A * A * A;
	return B;
}
int main()
{
	setlocale(LC_ALL, "ru");
	float a;
	int i;
	cout << "¬ведите значение 5 чисел (поочередно, через enter)" << endl;
	for (i = 1; i <= 5; i++)
	{
		cin >> a;
		a = PowerA3(a);
		cout << "¬веденное число в 3 степени равн€етс€: " << a << endl;
	}
}