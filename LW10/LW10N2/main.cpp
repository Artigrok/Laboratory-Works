#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int A, B, C;
    cout << "Введите значение А: ";
    cin >> A;
    cout << "Введите значение В: ";
    cin >> B;
    cout << "Введите значение С: ";
    cin >> C;
    if ((A < B) and (B < C))
    {
        cout << "Условие истинно" << endl;
    }
    else
    {
        cout << "Условие ложно";
    }
}