#include <iostream>

using namespace std;


bool isfact(int n)
{
    bool is = false;
    int fact = 1;

    for (int i = 1; i < n + 1; i++) {
        fact = fact * i;
        if (fact == n) {
            is = true;
        }
    }
    return is;
}

void factarr(int a[], bool fact[], int size)
{
    for (int i = 0; i < size; i++) {
        fact[i] = isfact(a[i]);
    }
}

int main()
{
    int a[] = { 1, 2, 3, 4, 5, 6 };
    bool fact[6];

    factarr(a, fact, 6);

    for (int i = 0; i < 6; i++) {
        cout << fact[i] << endl;
    }

    return 0;
}

