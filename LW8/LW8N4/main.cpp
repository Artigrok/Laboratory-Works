#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int A;
    cout << "Введите двузначное число: ";
    cin >> A;
    cout << "Число при перестановке цифр будет: " << (A%10*10)+(A/10);
}