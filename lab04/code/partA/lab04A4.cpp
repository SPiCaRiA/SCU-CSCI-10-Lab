#include <iostream>

using namespace std;


int main()
{
    for (int i = 0; i < 5; i++) {
        for (int j = 3; j > 0; j--) {
            cout << i * j << " ";
        }
    }

    cout << endl;

    return 0;
}

