#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int x, F;
    cout << "������� �������� x: ";
    cin >> x;
    F = 4 * pow(x-3, 6) - 7 * pow(x - 3, 3) + 2;
    cout << "�������� ������� �����: " << F << endl;
}