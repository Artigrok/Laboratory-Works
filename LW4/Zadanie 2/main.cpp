#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru"); // ����� ��� ��������� ������ ����� ���������� �������� ���������(������� ����)
    float p = 3.14;; 
    float d; 
    cout << "������� �������� ��������: " << endl;
    cin >> d;
    cout << "�������� �������: " << (d * p) << endl;
}
