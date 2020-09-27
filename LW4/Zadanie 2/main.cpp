#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru"); // Чтобы при выведения текста после компиляции работала кириллица(руссикй язык)
    float p = 3.14;; 
    float d; 
    cout << "Введите значение диаметра: " << endl;
    cin >> d;
    cout << "Значение площади: " << (d * p) << endl;
}
