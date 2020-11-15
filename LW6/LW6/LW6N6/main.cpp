#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int A, V;
    cout << "Введите значение А: " ;
    cin >> A;
    V = A * A;
    A = V * V;
    V = A * A;
    cout << "Значение A8 равно: " << V << endl;
}