#include <iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int N;
    cout << "¬ведите количество секунд : ";
    cin >> N;
    cout << "—екунд с момента начала последней минуты прошло: " << N%60;
}