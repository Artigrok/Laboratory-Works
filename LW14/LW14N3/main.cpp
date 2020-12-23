#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int N;
	cout << "Введите значение N: ";
	cin >> N;
	int K = 0;
	int S = 0;
	while (S < N)
	{
		S += K;
		K++;
	}
	cout << "Значение суммы равно: " << S << endl;
	cout << "Значение наименьшего К равно: " << K-1;
}