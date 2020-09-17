#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru"); // Чтобы при выведения текста после компиляции работала кириллица(руссикй язык)
    float a; 
    float b; 
    cout << "Введите значение стороны a: " << endl;
    cin >> a;
    cout << "Введите значение стороны b: " << endl;
    cin >> b;
    cout << "Значение площади: "<< (a * b) << endl;
    cout << "Значение периметра: " << (2 * (a + b)) << endl;
}

