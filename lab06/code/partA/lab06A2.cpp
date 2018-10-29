#include <iostream>

using namespace std;


int min_element(int a[], int size)
{
    int min = a[0];

    for (int i = 1; i < size; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }

    return min;
}

int main()
{
    int a[] = { 1, 2, 3, 4, 5, 6 };
    int min;

    min = min_element(a, 6);
    cout << min << endl;

    return 0;
}

