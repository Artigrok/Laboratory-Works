#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int a, b, c;
    cout << "Введите значение стороны а: ";
    cin >> a;
    cout << "Введите значение стороны b: ";
    cin >> b;
    cout << "Введите значение стороны c: ";
    cin >> c;
    if ((a < b + c) and (b < a + c) and (c < a + b))
    {
        cout << "Данный треугольник может существовать";
    }
    else
    {
        cout << "Данный треугольник НЕ может существовать";
    }
}