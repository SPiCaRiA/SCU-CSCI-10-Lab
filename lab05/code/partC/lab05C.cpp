#include <iostream>

using namespace std;


void max_average(double *max, double *average)
{
    double val = 0, total = 0, count = 0;
    *max = -1;

    cout << "Please enter a value, or -1 when you're done." << endl;
    cin >> val;
    while (val != -1) {
        total += val;
        count++;

        if (val > *max) {
            *max = val;
        }

        cout << "Please enter a value, or -1 when you're done." << endl;
        cin >> val;
    }
    *average = total / count;
}

int main()
{
    double max, average;

    max_average(&max, &average);

    cout << "max: " << max << endl << "average: " << average << endl;

    return 0;
}

