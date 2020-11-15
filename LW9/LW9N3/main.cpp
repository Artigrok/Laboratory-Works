#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int K, N;
    cout << "Введите номер ПЕРВОГО дня в году : ";
    cin >> N;
    cout << "Введите номер дня в году : ";
    cin >> K;
    cout << "Номер дня в неделе равен: " << (K % 7 + N-1)%7;
}