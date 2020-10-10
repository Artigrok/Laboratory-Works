#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru"); // Не уверен, но возможны сбои после компиляции(кириллица не появится)
    float pi, alpha;
    pi = 3.14;
    cout << "Введите значение угла(в радианах, пи = 3.14 ): ";
    cin >> alpha;
    cout << "Значение угла в градусах равно: " << alpha / pi * 180;
}
