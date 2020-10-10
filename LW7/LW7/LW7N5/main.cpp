#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru"); // Не уверен, но возможны сбои после компиляции(кириллица не появится)
    float A, B;
    cout << "Введите значение A(коэффициента x): ";
    cin >> A;
    cout << "Введите значение B: ";
    cin >> B;
    cout <<"Значение х равно: "<< (-B)/A ;
}