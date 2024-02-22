#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int table[5][3];
    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            cout << "Элемент (" << x << ", " << y << "): ";
            cin >> table[x][y];
        }
    }
    int sum;
    int total = 0;
    int row = 1;
    for (int y = 0; y < 3; y++)
    {
        sum = 0;
        for (int x = 0; x < 5; x++)
        {
            sum += table[x][y];
        }
        total += sum;
        cout << "Среднее строки: " << row++ <<  ": " << sum / 5 << endl;
    }
    cout << "Среднее всех строк: " << total / 15 << endl;
}