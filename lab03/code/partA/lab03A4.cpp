#include "lab03Autil.h"


int main()
{
    int x;
    double v, angle, y0, y;

    v = input_double("Enter the speed: ");
    angle = input_double("Enter the launch angle: ");
    y0 = input_double("Enter the initial height: ");

    y = y0;

    for (x = 0; x <= 9; x++) {
        y = calc_height(x, v, angle, y0);
        output_coordinate(x, y);
    }
}

