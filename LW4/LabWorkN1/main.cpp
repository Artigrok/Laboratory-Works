#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru"); // ����� ��� ��������� ������ ����� ���������� �������� ���������(������� ����)
    float a; 
    float b; 
    cout << "������� �������� ������� a: " << endl;
    cin >> a;
    cout << "������� �������� ������� b: " << endl;
    cin >> b;
    cout << "�������� �������: "<< (a * b) << endl;
    cout << "�������� ���������: " << (2 * (a + b)) << endl;
}

