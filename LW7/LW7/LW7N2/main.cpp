#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru"); // �� ������, �� �������� ���� ����� ����������(��������� �� ��������)
    float pi, alpha;
    pi = 3.14;
    cout << "������� �������� ����(� ��������, �� = 3.14 ): ";
    cin >> alpha;
    cout << "�������� ���� � �������� �����: " << alpha / pi * 180;
}
