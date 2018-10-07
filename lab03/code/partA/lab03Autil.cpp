#include <iostream>
#include <cmath>

#include "lab03Autil.h"

using namespace std;


double input_double(string prompt)
{
    double input;

    cout << prompt;
    cin >> input;

    return input;
}

void output_coordinate(int x, double y)
{
    cout << "(" << x << ", " << y << ")" << endl;
}

double calc_height(int x, double v, double angle, double y0)
{
    return y0 + x * tan(angle) - ((G * x * x) / (2 * (v * cos(angle)) * (v * cos(angle))));
}

