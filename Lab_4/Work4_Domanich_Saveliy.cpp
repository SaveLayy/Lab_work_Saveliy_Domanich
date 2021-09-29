#include <iostream>
using namespace std;

void First()
{
    float a, b, S, P;
    cout << "The sides of the rectangle are given a and b. Find its area S = a • b and perimeter P = 2 •(a + b)." << endl;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    S = a * b;
    P = 2 * (a + b);
    cout << "S=" << S << " " << "P=" << P << endl;
}
void Second()
{
    float L, d, π = 3.14;
    cout << "Given the diameter of the circle d. Find its length L = π • d. As use π values 3.14." << endl;
    cout << "Enter d: ";
    cin >> d;
    L = π * d;
    cout << "L=" << L;
}
void Third()
{
    float a, b, SrAr;
    cout << "You are given two numbers a and b. Find their arithmetic mean: (a + b) / 2." << endl;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    SrAr = (a + b) / 2;
    cout << "SrAr=" << SrAr << endl;
}
void Fourth()
{
    float a, b, Sum, Ras, Pro, Sq1, Sq2, Chas;
    cout << "Two non-zero numbers are given. Find the sum, difference, product and quotient of their squares." << endl;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    if (a != 0 and b != 0) {
        Sum = a + b;
        Ras = a - b;
        Pro = a * b;
        Sq1 = a * a;
        Sq2 = b * b;
        Chas = Sq1 / Sq2;
        cout << "Sum=" << Sum << "  Ras=" << Ras << "  Pro=" << Pro << "  Chas" << Chas << endl;
    }
    else
        if (a == 0 and b == 0)
            cout << "a and b = 0";
        else {
            if (a == 0)
                cout << "a = 0";
            if (b == 0)
                cout << "b = 0";
        }
}
void Fifth()
{
    float a, b, Sum, Ras, Pro, Chas;
    cout << "Two non-zero numbers are given. Find the sum, difference, product and quotient of their modules."<< endl;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    if (a != 0 and b != 0) {
        Sum = a + b;
        Ras = a - b;
        Pro = a * b;
        Chas = abs(a / b);
        cout << "Sum=" << Sum << "  Ras=" << Ras << "  Pro=" << Pro << "  Chas" << Chas << endl;
    }
    else
        if (a == 0 and b == 0)
            cout << "a and b = 0";
        else {
            if (a == 0)
                cout << "a = 0";
            if (b == 0)
                cout << "b = 0";
        }
}
void Error()
{
    cout << "WTF_Choose normal number\n" << endl;
}

int main()
{
    while (true) {
        int ExNum;
        cout << "Choose number 1-5 or push 0 if you want to close the program \n";
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