#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

string s;

float a, b, t;
float rat;
HANDLE hConsole;
int main()
{
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, 11);

    cout << "DECK NAME:";

    cin >> s;

    SetConsoleTextAttribute(hConsole, 14);

    cout << "# WIN: 1 " << endl;

    SetConsoleTextAttribute(hConsole, 12);

    cout << "# LOST: 2 " << endl;

    SetConsoleTextAttribute(hConsole, 11);

    cout << "# END: 3 " << endl << endl;

    SetConsoleTextAttribute(hConsole, 11);

    ifstream we((s+".txt").c_str());

    we >> a >> b;

    rat = a/(a + b);

    rat *= 100;

    SetConsoleTextAttribute(hConsole, 14);
    cout << "Win: " << fixed << setprecision(0) << a << endl << endl;
    SetConsoleTextAttribute(hConsole, 12);
    cout << "Lost: " << fixed << setprecision(0) << b << endl << endl;
    SetConsoleTextAttribute(hConsole, 10);
    cout  << fixed << setprecision(2) <<  rat << "%" << endl << endl;
    SetConsoleTextAttribute(hConsole, 11);

    while(1){

     cin >> t;
     cout << endl;
     if(t == 3){

         ofstream we((s+".txt").c_str());
         we << a << " " << b;
         we.close();
         return 0;
     }

     we >> a >> b;

     we.close();
     remove((s+".txt").c_str());

     if(t == 1) a++;
     else b++;
     SetConsoleTextAttribute(hConsole, 14);
     cout << "Win: " << fixed << setprecision(0) << a << endl << endl;
     SetConsoleTextAttribute(hConsole, 12);
     cout << "Lost: " << fixed << setprecision(0) << b << endl << endl;

     rat = a/(a + b);

     rat *= 100;

     SetConsoleTextAttribute(hConsole, 10);
     cout  << fixed << setprecision(2) <<  rat << "%" << endl << endl;
     SetConsoleTextAttribute(hConsole, 11);
    }
}
