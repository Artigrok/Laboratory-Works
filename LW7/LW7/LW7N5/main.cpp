#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru"); // �� ������, �� �������� ���� ����� ����������(��������� �� ��������)
    float A, B;
    cout << "������� �������� A(������������ x): ";
    cin >> A;
    cout << "������� �������� B: ";
    cin >> B;
    cout <<"�������� � �����: "<< (-B)/A ;
}