#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru"); // ����� ��� ��������� ������ ����� ���������� �������� ���������(������� ����)
    float a;
    float b;
    cout << "������� �������� ����� a: " << endl;
    cin >> a;
    cout << "������� �������� ����� b: " << endl;
    cin >> b;
    cout << "����� �� ������� �����: " << (abs(a) + abs(b)) << endl;
    cout << "�������� �� ������� �����(�� a �������� b): " << (abs(a) - abs(b)) << endl;
    cout << "�������� �� ������� �����(�� b �������� a): " << (abs(b) - abs(a)) << endl;
    cout << "������������ �� ������� �����: " << (abs(a) * abs(b)) << endl;
    cout << "������� �� ������� ��� ������� a �� b �����: " << (abs(a) / abs(b)) << endl;
    cout << "������� �� ������� ��� ������� b �� a �����: " << (abs(b) / abs(a)) << endl;
}