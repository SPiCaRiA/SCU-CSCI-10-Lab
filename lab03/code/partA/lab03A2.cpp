#include "lab03Autil.h"


int main()
{
    int x = 0;
    double v, angle, y0, y;

    v = input_double("Enter the speed: ");
    angle = input_double("Enter the launch angle: ");
    y0 = input_double("Enter the initial height: ");

    y = y0;

    while (x <= 9) {
        y = calc_height(x, v, angle, y0);
        output_coordinate(x, y);
        x++;
    }
}

