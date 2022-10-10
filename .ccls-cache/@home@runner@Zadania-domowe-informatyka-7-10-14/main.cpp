#include <iostream>

using namespace std;

int main()
{
    // Deklarowanie zmiennych będącymi liczbami całkowitymi:
    int a, b, c, d, e; 

    // Wczytywanie:
    cin >> a; 
    cin >> b; 
    cin >> c, 
    cin >> d, 
    cin >> e;

    // Właściwy program:
    cout << "Największą liczbą z pośród podanych jest: ";
    if (a >= b && a >= c && a >= d && a >= e)
    {
        cout << a << endl;
    }
    else if (b >= a && b >= c && b >= d && b >= e)
    {
        cout << b << endl;
    }
    else if (c >= a && c >= b && c >= d && c >= e)
    {
        cout << c << endl;
    }
    else if (d >= a && d >= b && d >= c && d >= e)
    {
        cout << d << endl;
    }
    else if (e >= a && e >= b && e >= c && e >= d)
    {
        cout << e << endl;
    }

    return 0;
}