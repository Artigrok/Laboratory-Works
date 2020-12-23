#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int A, B;
	cout << "Введите значение А и В через пробел: ";
	cin >> A >> B;
	while (A >= B)
	{
		A -= B;
	}
	cout << "Ответ: " << A;
}