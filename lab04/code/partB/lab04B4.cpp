#include <iostream>

using namespace std;


bool is_even(int n)
{
    return n % 2 == 0;
}

int main()
{
    cout << "0 is even? " << is_even(0) << endl;
    cout << "1 is even? " << is_even(1) << endl;
    cout << "4 is even? " << is_even(4) << endl;

    return 0;
}

