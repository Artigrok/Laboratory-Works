#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int K;
    cout << "Введите номер дня в году : ";
    cin >> K;
    cout << "Номер дня в неделе равен: " << K % 7;
}