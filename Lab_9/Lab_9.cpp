#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void First()
{
    string I;
    int i;
    cout << "Enter time in sec.\n";
    try
    {
        cin >> I;
        i = stoi(I) % 60;
        cout << i << " sec.\n\n";
    }
    catch (std::invalid_argument e)
    {
        cout << "\nIncorrect data\n\n";
    }
}
void Second()
{
    string K;
    int Res;
    cout << "You need to enter number of day of year (K)\n";
    try
    {
        cin >> K;
        if ((stoi(K) > 365) or (stoi(K) < 1))
        {
            cout << "\nIncorrect data\n\n";
        }
        Res = stoi(K) % 7;
        cout << "Number of day of week: " << Res << endl << endl;
    }
    catch (std::invalid_argument e)
    {
        cout << "\nIncorrect data\n\n";
    }

}
void Third()
{
    string K, N;
    int Res;
    try
    {
        cout << "Enter K\n";
        cin >> K;
        cout << "Enter N\n";
        cin >> N;
        if ((stoi(K) > 365) or (stoi(K) < 1) or (stoi(N) > 7) or (stoi(N) < 0))
        {
            cout << "\nIncorrect data\n\n";
        }
        Res = (stoi(K) + stoi(N) - 1) % 7;
        cout << "Number of day of week: " << Res << endl << endl;
    }
    catch (std::invalid_argument e)
    {
        cout << "\nIncorrect data\n\n";
    }
}
void Fourth()
{
    int N, S,ka,kb,k,d,A, B, C;
        cout << "\nEnter A: ";
        cin >> A;
        cout << "\nEnter B: ";
        cin >> B;
        cout << "\nEnter C: ";
        cin >> C;
        if ((A < 0) or (B < 0) or (C < 0))
        {
            cout << "\nIncorrect data";
        }
        else
        {
            ka = 0;
            d = C;
            while (d <= A) 
            {
                d = d + C;
                ka = ka + 1;
            }
            kb = 0; d = C;
            while (d <= B)
            {
                d = d + C;
                kb = kb + 1;
            }
        k= ka * kb;
        N = (C * C)*k;
        S = (A * B) - N;

            cout << "\nNumber of squares: " << k << endl;
            cout << "S of void: " << S << endl << endl;
        }
}
void Fifth()
{
    string i;
    int Res;
    try
    {
        cout << "\nEnter year: ";
        cin >> i;
        if ((stoi(i) < 0))
        {
            cout << "\nIncorrect data\n\n";
        }
        else
        {
            Res = stoi(i) / 100 + 1;
            if (stoi(i) % 100 == 0) { Res--; }
            cout << "Century: " << Res << endl << endl;
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
    while (true) {
        int ExNum;
        cout << "   Choose number of exercise (enter 0 to exit)\n"
            << "   1) Find the number of seconds since the beginning of the last minute. (Sunday - 0, Saturday - 6).\n"
            << "   2) Determine the day of the week for the K-th day of the year. January 1st was Monday. (Monday - 1, Sunday - 7).\n"
            << "   3) Determine the day of the week for the K-th day of the year. January 1st was N-th day of week\n"
            << "   4) Find the number of squares (C*C) on the rectangle (A*B) and the area of the unoccupied part of the rectangle.\n"
            << "   5) Determine centuty of year\n";
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