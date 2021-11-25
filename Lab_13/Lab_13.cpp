#include <iostream>
#include <Windows.h>
#include <cmath>
#include <string>
using namespace std;

void First()
{
    float x=0, x1=0, a = 0;
    cout << "Цена за киллограм:";
    cin >> x;
    for (int i = 0; i < 10; i++)
    {
        a += 0.1;
        x1 = x * a;
        cout << a << "=" << x1 << endl;
    }
}

void Second()
{
    float a=0, x = 1, x1 = 1.1, y=0;
    int i;
    cout << "N=";
    cin >> i;
    for (a = 1; a <= i; a++)
    {
        x *= x1;
        x1 += 0.1;
    }
    cout << x << endl;
}

void Third()
{
    int x=0, s = 0;
    cout << "Целое чило N>0:";
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        s += (2 * i - 1);
        cout << s << endl;
    }
    cout << s << endl;
}

void Fourth()
{
    float a=0, n=0, sum = 0;
    cout << "Введите А:";
    cin >> a;
    cout << "Введите N:";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        sum += pow(a, i);
    }
    cout << sum << endl;
}

void Fifth()
{
    float a=0, sum = 0;
    int n;
    cout << "Введите А:";
    cin >> a;
    cout << "Введите N:";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        sum += pow(-a, i);
    }
    cout << sum << endl;
}

void Error()
{
    cout << "incorrect number\n" << endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    while (true) {
        int ExNum;
        cout << "   Выберете номер задачи (нажмите 0 для выхода)\n"
            << "   1) Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1, 0.2, . . . , 1 кг конфет.\n"
            << "   2) Дано целое число N (> 0). Найти произведение 1.1 · 1.2 · 1.3 · . . . (N сомножителей).\n"
            << "   3) Дано целое число N (> 0). Найти квадрат данного числа, используя для его вычисления следующую формулу: N2 = 1 + 3 + 5 + . . . + (2·N − 1). После добавления к сумме каждого слагаемого выводить текущее значение суммы.\n"
            << "   4) Дано вещественное число A и целое число N (> 0). Используя один цикл, найти сумму 1 + A + A2 + A3 + . . . + AN.\n"
            << "   5) Дано вещественное число A и целое число N (> 0). Используя один цикл, найти значение выражения 1 − A + A2 − A3 + . ..± AN.\n";
        cin >> ExNum;
        if (ExNum == 1)
        {
            First();
        }
        else if (ExNum == 2)
        {
            Second();
        }
        else if (ExNum == 3)
        {
            Third();
        }
        else if (ExNum == 4)
        {
            Fourth();
        }
        else if (ExNum == 5)
        {
            Fifth();
        }
        else if (ExNum == 0)
        {
            break;
        }
        else
        {
            Error();
        }

    }
    return 0;
}