#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	float a;
	cin >> a;
	int i;
	for ( i = 1; i <= 10; i++ )
	{
		cout << a*i*0.1 << endl ;
	}
}