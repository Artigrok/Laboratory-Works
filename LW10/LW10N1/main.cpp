#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int A, B;
    cout << "������� �������� �: ";
    cin >> A;
    cout << "������� �������� �: ";
    cin >> B;
    if ((A > 2) and (B <= 3))
    {
        cout << "������� �������" << endl;
    }
    else
    {
        cout << "������� �����";
    }
}