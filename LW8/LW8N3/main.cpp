#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int A, B;
    cout << "������� ������ ����� ������� �: ";
    cin >> A;
    cout << "������� ������ ����� ������� �: ";
    cin >> B;
    cout << "���������� �������� � �� ������� � �����: " << A - (A / B)*B;
}