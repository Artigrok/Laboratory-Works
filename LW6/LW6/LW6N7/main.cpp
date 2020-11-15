#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int A, V, D;
    cout << "Введите значение А: ";
    cin >> A;
    V = A * A * A;
    D = V * V;
    A = D * D * V;
    cout << "Значение A15 равно: " << A << endl;
}