#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int A, B, C, R;
    cout << "Введите значение А: ";
    cin >> A;
    cout << "Введите значение B: ";
    cin >> B;
    cout << "Введите значение С: ";
    cin >> C;
    R = C;
    C = B;
    B = A;
    A = R;
    cout << "Значение A равно: " << A << endl;
    cout << "Значение B равно: " << B << endl;
    cout << "Значение C равно: " << C;
}