#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int A, B, R;
    cout << "������� �������� �: " ;
    cin >> A;
    cout << "������� �������� B: ";
    cin >> B;
    R = B;
    B = A;
    A = R;
    cout << "�������� A �����: "<< A << endl;
    cout << "�������� B �����: " << B ;
}