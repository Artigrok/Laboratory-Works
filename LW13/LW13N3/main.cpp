#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int N, S;
	cout << "Введите N: ";
	cin >> N;
	int i;
	S = 0;
	for (i = 1; i <= N; i++)
	{
		S+=2*i-1;
	}
	cout << "Ответ: " << S;
}