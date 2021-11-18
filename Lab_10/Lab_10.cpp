#include <iostream>
#include <Windows.h>
#include <cmath>
#include <string>
using namespace std;

void First()
{
    int a=0, b=0;
    cout << "A:";
    cin >> a;
    cout << "B:";
    cin >> b;
    if (a > 2 and b <= 3)
    {
        cout << "Справедливы неравенства\n";
    }
    else
    { 
    cout << "Неcпрведливы неравенства\n"; 
    }
}

void Second()
{
    int a=0, b=0, c=0;
    cout << "A:";
    cin >> a;
    cout << "B:";
    cin >> b;
    cout << "C:";
    cin >> c;
    if (a < b and b < c)
    {
        cout << "Справедливы\n";
    }
    else
        cout << "Неcпрведливы\n";
}

void Third()
{
    int a=0;
    cout << "Целое число:";
    cin >> a;
    if (a > 10 and a < 100)
    {
        if (a % 2 == 0)
        {
            cout << "Четное, два знака\n";
        }
        else
        {
            cout << "Неверно\n";
        }
    }
    else
    { 
        cout << "Неверно\n"; 
    }
}

void Fourth()
{
    int a=0, x1=0, x2=0, x3=0;
    cout << "Введите число: ";
    cin >> a;
    x1 = a / 100;
    x2 = (a - (x1 * 100)) / 10;
    x3 = (a - (x1 * 100) - (x2 * 10)) / 1;
    if (x1 < x2 and x2 < x3)
    {
        cout << "Возрастает\n";
    }
    else
        if (x1 > x2 and x2 > x3)
        {
            cout << "Убывает\n";
        }
        else
            cout << "Равная\n" << endl;
}

void Fifth()
{
    int a=0, x1=0, x2=0, x3=0, x4=0;
    cout << "Введите число: ";
    cin >> a;
    x1 = a / 1000;
    x2 = (a - (x1 * 1000)) / 100;
    x3 = (a - (x2 * 100) - (x1 * 1000)) / 10;
    x4 = (a - (x1 * 1000) - (x2 * 100) - (x3 * 10)) / 1;
    if (x1 == x4 and x2 == x3)
    {
        cout << "Одинаково считается\n";
    }
    else
        cout << "Разница\n";
}

void Sixth()
{
    const int X = 2;
    int a=0, b=0, c=0, x=0, x1=0;//C2=A2+B2
    cout << "Больший катит A: ";
    cin >> a;
    cout << "Меньший катит B: ";
    cin >> b;
    cout << "Гипотенуза C: ";
    cin >> c;
    if (a <= b)
    {
        cout << "А не больше В\n";
    }
    x = pow(a, X) + pow(b, X);
    x1 = pow(c, X);
    if (x1 == x)
    {
        cout << "Иснинно\n";
    }
    else
        cout << "Неверно\n";
}

void Seventh()
{
    int a, b, c, x;
    cout << "A :";
    cin >> a;
    cout << "B: ";
    cin >> b;
    cout << "C: ";
    cin >> c;
    if ((a + b) > c && (a + c) > b && (b + c) > a)
    {
        cout << "Существует\n";
    }
    else
    {
        cout << "Несуществует\n";
    }
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
            << "   1) Проверить истинность высказывания: «Справедливы неравенства A > 2 и B <= 3».\n"
            << "   2) Даны три целых числа: A, B, C. Проверить истинность высказывания: «Справедливо двойное неравенство A < B < C».\n"
            << "   3) Дано целое положительное число. Проверить истинность высказывания: «Данное число является четным двузначным».\n"
            << "   4) Дано трехзначное число. Проверить: «Цифры данного числа образуют возрастающую или убывающую последовательность».\n"
            << "   5) Дано четырехзначное число. Проверить высказывания:«Данное число читается одинаково слева направо и справа налево».\n"
            << "   6) Даны целые числа a,b,c, сторонs треугольника. Проверить:«Треугольник со сторонами a, b, c является прямоугольным».\n"
            << "   7) Даны целые числа a, b, c. Проверить истинность высказывания: «Существует треугольник со сторонами a, b, c».\n";
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
        else if (ExNum == 6)
        {
            Sixth();
        }
        else if (ExNum == 7)
        {
            Seventh();
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