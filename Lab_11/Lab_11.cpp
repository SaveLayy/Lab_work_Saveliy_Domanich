#include <iostream>
#include <Windows.h>
#include <cmath>
#include <string>
using namespace std;

void First()
{
    int a=0, b=0, x=0;
    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;
    if (a != b)
    {
        if (a > b)
        {
            b = a;
        }
        else
        {
            a = b;
        }
    }
    else
    {
        a = 0;
        b = 0;
    }
    cout << "A: " << a << endl;
    cout << "B: " << b << endl << endl;
}

void Second()
{
    int a=0, b=0, c=0, x1=0, x2=0, sum=0;
    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;
    cout << "C: ";
    cin >> c;
    if (b <= c && b <= a)
    {
        cout << a + c << endl;
    }
    else
    {
        if (a <= c && a <= b)
        {
            cout << b + c << endl;
        }
        else
        {
            cout << b + a << endl;
        }
    }
}

void Third()
{
    float b = 0, c = 0, Ax = 0, Ay = 0, Bx = 0, By = 0, Cx = 0, Cy = 0, abX = 0, abY = 0, acX = 0, acY = 0, ab = 0, ac = 0;
    cout << "Введите координаты точек А, В, С:\n";
    cout << "Ax: ";
    cin >> Ax;
    cout << "Ay: ";
    cin >> Ay;
    cout << "Bx: ";
    cin >> Bx;
    cout << "By: ";
    cin >> By;
    cout << "Cx: ";
    cin >> Cx;
    cout << "Cy: ";
    cin >> Cy;
    abX = abs(Ax - Bx);
    abY = abs(Ay - By);
    ab = sqrt(abX * abX + abY * abY);
    acX = abs(Ax - Cx);
    acY = abs(Ay - Cy);
    ac = sqrt(acX * acX + acY * acY);
    if (ab < ac)
    {
        cout << "Точка В ближе к А. Расстояние равно: " << ab << endl;
    }
    else
    {
        if (ac < ab)
        {
            cout << "Точка C ближе к А. Расстояние равно. " << ac << endl;
        }
        else
        {
            if (ab == ac)
            {
                cout << "Точки B и С равноудалены от точки A\n";
            }
        }

    }
}

void Fourth()
{
    int x=0, y=0;
    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;
    if ((x > 0) & (y > 0))
    {
        cout << "1\n";
    }
    else
        if ((x < 0) & (y > 0))
        {
            cout << "2\n";
        }
        else
            if ((x < 0) & (y < 0))
            {
                cout << "3\n";
            }
            else
            {
                cout << "4\n";
            }
}

void Fifth()
{
    int a=0;
    cout << "A: ";
    cin >> a;
    if (a < 0 && a % 2 == 0)
    {
        cout << "Отрицательное четное число\n";
    }
    if (a == 0)
    {
        cout << "Нулевое число";
    }
    if (a > 0 && a % 2 == 1)
    {
        cout << "Положитьельное нечетное число\n";
    }
    if (a > 0 && a % 2 == 0)
    {
        cout << "Положитьельное четное число\n";
    }
    if (a < 0 && a % 2 == 1)
    {
        cout << "Отрицательное четное число\n";
    }
}

void Sixth()
{
    int a;
    cout << "Введите число от 1 до 999: ";
    cin >> a;
    if (a / 100 && a % 2 == 0)
    {
        cout << "Четное трехзначное число\n";
    }
    if (a / 100 && a % 2 == 1)
    {
        cout << "Нечетное трехзначное число\n";
    }
    if (a <= 99 && a % 2 == 0 && a >= 10)
    {
        cout << "Четное двухзначное число\n";
    }
    if (a <= 99 && a % 2 == 1 && a >= 10)
    {
        cout << "Нечетное двухзначное число\n";
    }
    if (a < 10 && a % 2 == 0)
    {
        cout << "Четное однозначное число\n";
    }
    if (a < 10 && a % 2 == 1)
    {
        cout << "Нечетное однозначное число\n";
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
        cout << "    Выберете номер задачи (нажмите 0 для выхода)\n"
            << "  1) Две переменные целого типа: A и B. Если их значения не равны, то присвоить каждой переменной большее из этих значений, а если равны, то присвоить переменным нулевые значения.\n"
            << "  2) Даны три числа. Найти сумму двух наибольших из них.\n"
            << "  3) На плоскости расположены три точки: A, B, C. Определить, какая из двух последних точек (B или C) расположена ближе к A, и вывести эту точку и ее расстояние от точки A.\n"
            << "  4) Даны координаты точки, не лежащей на координатных осях OX и OY. Определить номер координатной четверти, в которой находится данная точка.\n"
            << "  5) Дано целое число. Вывести его строку-описание вида «отрицательное четное число», «нулевое число», «положительное нечетное число» и т. д.\n"
            << "  6) Дано целое число, лежащее в диапазоне 1–999. Вывести его строкуописание вида «четное двузначное число», «нечетное трехзначное число» и т. д.\n";
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