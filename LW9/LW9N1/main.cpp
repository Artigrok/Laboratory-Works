#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int N;
    cout << "������� ���������� ������ : ";
    cin >> N;
    cout << "������ � ������� ������ ��������� ������ ������: " << N%60;
}