#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int A, B, C;
    cout << "������� �������� �: ";
    cin >> A;
    cout << "������� �������� �: ";
    cin >> B;
    cout << "������� �������� �: ";
    cin >> C;
    if ((A < B) and (B < C))
    {
        cout << "������� �������" << endl;
    }
    else
    {
        cout << "������� �����";
    }
}