#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int A;
    cout << "������� ����� ������������ �����: ";
    cin >> A;
    if ((A % 2 == 0) and (A / 10 > 0) and (A / 10 < 10))
    {
        cout << "������ ����� �������� ������ � ����������";
    }
    else
    {
        cout << "������ ����� �� �������� ������ � ����������";
    }
}