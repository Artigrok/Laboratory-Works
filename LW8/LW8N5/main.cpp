#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int A;
    cout << "������� ����������� �����: ";
    cin >> A;
    cout << "����� ��� ������������ ���� �����: " << (A % 100 * 10) + (A / 100);
}