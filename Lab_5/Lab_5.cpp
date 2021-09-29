#include <iostream>
#include <cmath>// для модуля.
using namespace std;

void First()
{
    double x1, y1, x2, y2, a, b, Dlina;
    cout << "Enter x1\n";
    cin >> x1;
    cout << "Enter y1\n";
    cin >> y1;
    cout << "Enter x2\n";
    cin >> x2;
    cout << "Enter y2\n";
    cin >> y2;
    a = abs(x1 - x2);
    b = abs(y1 - y2);
    Dlina = sqrt(a * a + b * b);//теорема П.
    cout << "Dlina = " << Dlina << endl;
}
void Second()
{
    double A, B, C, AC, BC, Sum;
    cout << "Enter A\n";
    cin >> A;
    cout << "Enter B\n";
    cin >> B;
    cout << "Enter C\n";
    cin >> C;
    AC = abs(A - C);
    BC = abs(B - C);
    Sum = AC + BC;
    cout << "AC = " << AC << "  BC = " << BC << "  Sum = " << Sum << endl;
}
void Third()
{
    double A, B, C, AC, BC, Proiz;
    cout << "Enter A\n";
    cin >> A;
    cout << "Enter B\n";
    cin >> B;
    cout << "Enter C\n";
    cin >> C;
    AC = abs(A - C);
    BC = abs(B - C);
    Proiz = AC * BC;
    cout << "Proiz = " << Proiz << endl;
}
void Fourth()
{
    double x1, y1, x2, y2, a, b, S, P;
    cout << "Enter x1\n";
    cin >> x1;
    cout << "Enter x2\n";
    cin >> x2;
    cout << "Enter y1\n";
    cin >> y1;
    cout << "Enter y2\n";
    cin >> y2;
    a = abs(x1 - x2);
    b = abs(y1 - y2);
    P = 2 * (a + b);
    S = a * b;
    cout << "Perimeter = " << P << "  Square = " << S << endl;
}
void Fifth()
{
    double x1, y1, x2, y2, x3, y3, a, b, AB, BC, CA, P, S,S1,h;
    cout << "Enter x1\n";
    cin >> x1;
    cout << "Enter y1\n";
    cin >> y1;
    cout << "Enter x2\n";
    cin >> x2;
    cout << "Enter y2\n";
    cin >> y2;
    cout << "Enter x3\n";
    cin >> x3;
    cout << "Enter y3\n";
    cin >> y3;
    a = abs(x1 - x2);
    b = abs(y1 - y2);
    AB = sqrt(a * a + b * b);
    a = abs(x2 - x3);
    b = abs(y2 - y3);
    BC = sqrt(a * a + b * b);
    a = abs(x1 - x3);
    b = abs(y1 - y3);
    CA = sqrt(a * a + b * b);
    P = AB + BC + CA;
    S = 0.5 * abs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1));
    cout << "Perimeter = " << P << "  Square = " << S << endl;
}
void Error()
{
    cout << "Choose normal number" << endl;
}

int main()
{
    while (true) {
        int ExNum;
        cout << "Choose number 1-5 or push 0 if you want to close the program\n"
            << "1) Find the distance between two points with given coordinates (x1, y1) and (x2, y2)\n"
            << "2) Three points A, B, C are given on the number axis. Find the lengths of the segments AC and BC and their sum.\n"
            << "3) Three points A, B, C are given on the number axis. Point C is located between points A and B.Find the product of the lengths of the segments AC and BC\n"
            << "4) The coordinates of two opposite vertices of the rectangle are given: (x1, y1), (x2, y2). The sides of the rectangle are parallel to the coordinate axes. Find the perimeter and area of the given rectangle.\n"
            << "5) The coordinates of the three vertices of the triangle are given: (x1, y1), (x2, y2), (x3, y3). Find its perimeter and area.\n";
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