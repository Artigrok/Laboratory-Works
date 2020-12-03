#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int i, S, N, p;
	float A;
	cin >> A >> N;
	S = 0;
	A = -A;
	for (i = 0; i <= N; i++)
	{
		p = pow(A, i);
		S += p;
	}
	cout << S;
}