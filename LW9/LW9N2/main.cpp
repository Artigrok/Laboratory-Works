#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int K;
    cout << "������� ����� ��� � ���� : ";
    cin >> K;
    cout << "����� ��� � ������ �����: " << K % 7;
}