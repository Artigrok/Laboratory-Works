#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int x, F;
    cout << "Введите значение x: ";
    cin >> x;
    F = 4 * pow(x-3, 6) - 7 * pow(x - 3, 3) + 2;
    cout << "Значение функции равно: " << F << endl;
}