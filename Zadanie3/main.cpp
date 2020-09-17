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
    cout << "Среднее арифметическое равно: " << ((a+b)/2) << endl;
}
