#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int a, b, c;
    cout << "������� �������� ������� �: ";
    cin >> a;
    cout << "������� �������� ������� b: ";
    cin >> b;
    cout << "������� �������� ������� c: ";
    cin >> c;
    if ((a < b + c) and (b < a + c) and (c < a + b))
    {
        cout << "������ ����������� ����� ������������";
    }
    else
    {
        cout << "������ ����������� �� ����� ������������";
    }
}