#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int N;
	cin >> N;
	int i;
	float S;
	S = 1.1;
	for (i = 2; i <= N; i++)
	{
		S = S * ( 1 + (i * 0.1) );
	}
	cout << S;
}