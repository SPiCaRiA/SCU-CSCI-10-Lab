#include <iostream>

#include "lab03Cutil.h"

using namespace std;


int input_integer(string prompt)
{
    int input;

    cout << prompt;
    cin >> input;

    return input;
}

void output_result(bool is_prime)
{
    cout << "The number is " << (is_prime ? "" : "not ") << "a prime number" << endl;
}

bool is_prime(int num)
{
    int bound = num / 2 + num % 2;

    for (int i = 2; i <= bound; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

