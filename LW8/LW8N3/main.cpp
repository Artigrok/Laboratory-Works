#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int A, B;
    cout << "Введите размер длины отрезка А: ";
    cin >> A;
    cout << "Введите размер длины отрезка В: ";
    cin >> B;
    cout << "Количество отрезков В на отрезке А равно: " << A - (A / B)*B;
}