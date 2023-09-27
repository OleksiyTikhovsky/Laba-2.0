// Lab_02.cpp
// <Tikhovsky Oleksiy>
// Laboratory work No. 2.1
// Linear programs.
// Option 22
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double alpha; // вхідний параметр в радіанах
    double x;     // вхідний параметр
    double z1;    // результат обчислення z1
    double z2;    // результат обчислення z2

    cout << "Введіть значення alpha в радіанах: ";
    cin >> alpha;

    cout << "Введіть значення x: ";
    cin >> x;

    z1 = cos(alpha) + sin(alpha) + cos(3 * alpha) + sin(3 * alpha);
    z2 = 2 * sqrt(2) * cos(alpha) * sin((M_PI / 4) + (2 * alpha));

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}