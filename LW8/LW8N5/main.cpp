#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int A;
    cout << "Введите трехзначное число: ";
    cin >> A;
    cout << "Число при перестановке цифр будет: " << (A % 100 * 10) + (A / 100);
}