#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int A, V, D;
    cout << "������� �������� �: ";
    cin >> A;
    V = A * A * A;
    D = V * V;
    A = D * D * V;
    cout << "�������� A15 �����: " << A << endl;
}