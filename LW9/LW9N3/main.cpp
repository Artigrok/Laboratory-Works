#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int K, N;
    cout << "������� ����� ������� ��� � ���� : ";
    cin >> N;
    cout << "������� ����� ��� � ���� : ";
    cin >> K;
    cout << "����� ��� � ������ �����: " << (K % 7 + N-1)%7;
}