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
    float S = a * b;
    float P = 2 * (a + b);
    cout << "�������� �������: "<< S << endl;
    cout << "�������� ���������: " << P << endl;
}

