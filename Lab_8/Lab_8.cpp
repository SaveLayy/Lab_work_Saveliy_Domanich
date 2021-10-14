#include <iostream>
#include <Windows.h>
#include <cmath>
#include <string>
using namespace std;

void First()
{
    int i;
    cout << "Enter file size in bytes\n";
    cin >> i;
    if (i % 1024 > 0)
    {
        i = i/1024+1;
    }
    else
    {
        i = i/1024;
    }
    cout << i << " Kilobytes\n\n";
}
void Second()
{
    string A, B;
    int Res;
    cout << "You need to enter A and B\n";
    try
    {
        cout << "Enter A: ";
        cin >> A;
        cout << "Enter B: ";
        cin >> B;
        Res = stod(A) / stod(B);
        cout << "answer: " << Res << endl << endl;
    }
    catch (std::invalid_argument e)
    {
        cout << "\nIncorrect data\n\n";
    }

}
void Third()
{
    int A, B;
    int Res;
    cout << "Введи A и B\n";
        cout << "ВВод A: ";
        cin >> A;
        cout << "ВВод B: ";
        cin >> B;
        if ((A > B) and (A >= 0) and (B >= 0 ))
        {
        Res = A - ((A / B) * B);
        cout << "Answer: " << Res << endl << endl;
        }
        else
        {
            cout << "А ИЛИ В не соответствуеют условию\n";
        }
}
void Fourth()
{
    string i;
    try
    {
        cout << "\nEnter number: ";
        cin >> i;
        if ((stoi(i) < 10) or (stoi(i) > 99))
        {
            cout << "\nЧисло не двухзначное!!!!\n\n";
        }
        else
        {
            reverse(i.begin(), i.end());
            cout << "Answer: " << i << endl << endl;
        }
    }
    catch (std::invalid_argument e)
    {
        cout << "\nIncorrect data\n\n";
    }
}
void Fifth()
{
    string i;
    int Res;
    try
    {
        cout << "\nEnter number: ";
        cin >> i;
        if ((stoi(i) < 100) or (stoi(i) > 999))
        {
            cout << "\nЧисло не трехзначное!!!!\n\n";
        }
        else
        {
            Res = stoi(i) % 100;
            cout << "Answer: " << Res << stoi(i) / 100 << endl << endl;
        }
    }
    catch (std::invalid_argument e)
    {
        cout << "\nIncorrect data\n\n";
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
            << "   1) Дан размер файла в байтах. Найти количество полных килобайтов, которые занимает данный файл\n"
            << "   2) Даны целые положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений). Найти количество отрезков B, размещенных на отрезке A.\n"
            << "   3) Даны целые положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений). Найти длину незанятой части отрезка A.\n"
            << "   4) Дано двузначное число. Вывести число, полученное при перестановке цифр исходного числа.\n"
            << "   5) Дано трехзначное число. В нем зачеркнули первую слева цифру и приписали ее справа. Вывести полученное число.\n";
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
