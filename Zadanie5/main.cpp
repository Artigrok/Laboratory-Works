#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru"); // Чтобы при выведения текста после компиляции работала кириллица(руссикй язык)
    float a;
    float b;
    cout << "Введите значение числа a: " << endl;
    cin >> a;
    cout << "Введите значение числа b: " << endl;
    cin >> b;
    cout << "Сумма их модулей равна: " << (abs(a) + abs(b)) << endl;
    cout << "Разность их модулей равна(от a отнимаем b): " << (abs(a) - abs(b)) << endl;
    cout << "Разность их модулей равна(от b отнимаем a): " << (abs(b) - abs(a)) << endl;
    cout << "Произведение их модулей равна: " << (abs(a) * abs(b)) << endl;
    cout << "Частное их модулей при делении a на b равна: " << (abs(a) / abs(b)) << endl;
    cout << "Частное их модулей при делении b на a равна: " << (abs(b) / abs(a)) << endl;
}