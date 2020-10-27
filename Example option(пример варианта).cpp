#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    int p = 65536;

    for (int i = 2; i <= p; i *= 2)
    {
        cout << i;
        cout << " ";
    }
    cout << " 16-ти разрядная сетка закончена";
}
