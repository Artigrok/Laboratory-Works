#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int A, B;
    cout << "������� ������ ����� � ������: ";
    cin >> B;
    B = B / 1024;
    cout << "������ ����� � ���������� �����: " << B;
}