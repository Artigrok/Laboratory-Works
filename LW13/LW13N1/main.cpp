#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	float a;
	cout << "Введите цену 1 кг конфет: ";
	cin >> a;
	int i;
	for ( i = 1; i <= 10; i++ )
	{
		cout << "Цена " << i*0.1 << " кг конфет равна: " << a*i*0.1 << endl ;
	}
}