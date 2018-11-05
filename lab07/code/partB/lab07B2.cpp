#include <iostream>

using namespace std;


string encrypt(string input, int shift)
{
    for (int i = 0; i < input.length(); i++) {
        input[i] = input[i] + shift;
    }

    return input;
}

int main()
{
    cout << encrypt("cat", 3) << endl;
}

