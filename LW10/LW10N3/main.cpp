#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int A;
    cout << "Введите целое положительно число: ";
    cin >> A;
    if ((A % 2 == 0) and (A / 10 > 0) and (A / 10 < 10))
    {
        cout << "Данное число является четным и двузначным";
    }
    else
    {
        cout << "Данное число НЕ является четным и двузначным";
    }
}