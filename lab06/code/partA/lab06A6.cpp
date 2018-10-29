#include <iostream>

using namespace std;


void factors(int n, int facts[])
{
    facts[0] = 0;
    for (int i = 1; i <= n; i++) {
        facts[i] = n % i == 0 ? 1 : 0;
    }
}


int main()
{
    int a[50];
    int test;

    test = 6;
    factors(test, a);

    for (int i = 0; i <= test; i++) {
        cout << a[i] << endl;
    }

    return 0;
}

