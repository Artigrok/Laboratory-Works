#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int A, B;
    cout << "Введите размер файла в байтах: ";
    cin >> B;
    B = B / 1024;
    cout << "Размер файла в килобайтах равен: " << B;
}