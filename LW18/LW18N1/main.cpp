#include <iostream>;
using namespace std;
int main()
{
    int main() 
    {
        setlocale(0, "");
        int n;
        cout << "������� ���������� �����, ������� �� ������ ������: ";
        cin >> n;
        cout << "������� " << n << " �����: ";

        int a = new int[n];    // �������
                                              // ������������ ������
        for (int i = 0; i < n; i++) {
            cin >> a[i];  // ��������� ����� � ������ �������
        }

        cout << "������ ������� ������� �������� ������� � �������� �������: ";

        for (int i = n - 1; i >= 0; i--) {
            cout << dinamich_array[i] << " ";  // ������� �������� ���� �����
        }

        cout << endl << "������� ������!";
        return 0;
    }
}