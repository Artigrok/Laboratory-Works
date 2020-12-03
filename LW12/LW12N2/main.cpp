#include <iostream>;
#include <string>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    string d[] = { "Север","Запад","Юг","Восток" };
    char C;
    int i, N;
    cout << "Введите направление(инициал на англ. языке): ";
    cin >> C;
    cout << "Введите N: ";
    cin >> N;
    if (C == 'N')
    {
        i = 4;
    }
    if (C == 'S')
    {
        i = 6;
    }
    if (C == 'W')
    {
        i = 5;
    }
    if (C == 'E')
    {
        i = 7;
    }
    cout << d[abs((i + N) % 4)];
}