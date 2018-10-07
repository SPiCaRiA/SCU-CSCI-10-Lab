#ifndef LAB03AUTIL_H
#define LAB03AUTIL_H

#include <string>

#define G 9.81

double input_double(std::string prompt);

void output_coordinate(int x, double y);

double calc_height(int x, double v, double angle, double y0);

#endif

