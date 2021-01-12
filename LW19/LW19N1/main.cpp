#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int n, i;
    cout << "Введите значение N: ";
    cin >> n;
    int* r = new int[n];
    cout << "Введите значения элементов массива А:" << endl;
    int* a = new int[n];
    for (i = 0; i < n; i++)
    {
        cout << "Значение A[" << i << "]: ";
        cin >> a[i];
    }
    int j = 0;
    r[j] = a[j];
    j++;
    for (i = 1; i < n; i++)
    {
        if (a[i - 1] != a[i])
        {
            r[j] = a[i];
            j++;
        }
    }
    cout << "Ответ: ";
    for (int i = 0; i < j; i++) cout << r[i] << " ";
}