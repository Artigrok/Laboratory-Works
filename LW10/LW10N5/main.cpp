#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int A, a1, a2, a3, a4;
    cout << "Введите трехзначное число: ";
    cin >> A;
    a1 = A / 1000;
    a2 = (A / 100) % 10;
    a3 = (A / 10) % 10;
    a4 = A % 10;
    if (((a1 == a4) and (a2 == a3)))
    {
        cout << "Данное число читается одинаково слева направо и справа налево";
    }
    else
    {
        cout << "Данное число НЕ читается одинаково слева направо и справа налево";
    }
}