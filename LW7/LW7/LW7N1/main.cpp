#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru"); // �� ������, �� �������� ���� ����� ����������(��������� �� ��������)
    float pi, alpha;
    pi = 3.14;
    cout << "������� �������� ����(� ��������): ";
    cin >> alpha;
    cout << "�������� ���� � �������� �����: " << alpha/180*pi ;
}
