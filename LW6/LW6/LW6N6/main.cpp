#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int A, V;
    cout << "������� �������� �: " ;
    cin >> A;
    V = A * A;
    A = V * V;
    V = A * A;
    cout << "�������� A8 �����: " << V << endl;
}