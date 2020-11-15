#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int A, B, R;
    cout << "Введите значение А: " ;
    cin >> A;
    cout << "Введите значение B: ";
    cin >> B;
    R = B;
    B = A;
    A = R;
    cout << "Значение A равно: "<< A << endl;
    cout << "Значение B равно: " << B ;
}