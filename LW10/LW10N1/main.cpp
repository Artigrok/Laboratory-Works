#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int A, B;
    cout << "Введите значение А: ";
    cin >> A;
    cout << "Введите значение В: ";
    cin >> B;
    if ((A > 2) and (B <= 3))
    {
        cout << "Условие истинно" << endl;
    }
    else
    {
        cout << "Условие ложно";
    }
}