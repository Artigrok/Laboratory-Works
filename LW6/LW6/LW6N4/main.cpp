#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int x,F;
    cout << "������� �������� x: ";
    cin >> x;
    F = 3*pow(x,6)-(6*x*x)-7;
    cout << "�������� ������� �����: " << F << endl;
}