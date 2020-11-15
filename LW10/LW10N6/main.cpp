#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int a,b,c;
    cout << "Введите значение стороны а: ";
    cin >> a;
    cout << "Введите значение стороны b: ";
    cin >> b;
    cout << "Введите значение стороны c: ";
    cin >> c;
    if (( a * a == b * b + c * c ) or (b * b == a * a + c * c) or (c * c == a * a + b * b))
    {
        cout << "Данный треугольник прямоугольный";
    }
    else
    {
        cout << "Данный треугольник НЕ прямоугольный";
    }
}