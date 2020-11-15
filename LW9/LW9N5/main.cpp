#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int A;
    cout << "Введите номер года: ";
    cin >> A;
    cout << "Номер столетия года равен: " << A / 100 + 1;

}