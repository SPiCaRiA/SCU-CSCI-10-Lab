#include <iostream>

using namespace std;


int is_even(int n)
{
    return n % 2 == 0;
}

int evens_between(int n, int m)
{
    int result = 0;

    for (int i = n; i <= m; i++) {
        result += is_even(i);
    }

    return result;
}

int main()
{
    cout << evens_between(0, 6) << endl;
    cout << evens_between(1, 8) << endl;
    cout << evens_between(3, 10) << endl;

    return 0;
}

