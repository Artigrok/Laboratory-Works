#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int a,b,c;
    cout << "������� �������� ������� �: ";
    cin >> a;
    cout << "������� �������� ������� b: ";
    cin >> b;
    cout << "������� �������� ������� c: ";
    cin >> c;
    if (( a * a == b * b + c * c ) or (b * b == a * a + c * c) or (c * c == a * a + b * b))
    {
        cout << "������ ����������� �������������";
    }
    else
    {
        cout << "������ ����������� �� �������������";
    }
}