#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int A, B, C, R;
    cout << "������� �������� �: ";
    cin >> A;
    cout << "������� �������� B: ";
    cin >> B;
    cout << "������� �������� �: ";
    cin >> C;
    R = C;
    C = B;
    B = A;
    A = R;
    cout << "�������� A �����: " << A << endl;
    cout << "�������� B �����: " << B << endl;
    cout << "�������� C �����: " << C;
}