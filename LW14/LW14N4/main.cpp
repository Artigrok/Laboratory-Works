#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	float  P;
	cout << "Введите значение Р: ";
	cin >> P;
	float S = 1000;
	int K = 0;
	while (S <= 1100)
	{
		S = (1 + P/100) * S;
		K++;
		cout << S;
	}
	cout << "S равно:" << S << " рублей" << endl;
	cout << "K равно: " << K << " месяцев";
}