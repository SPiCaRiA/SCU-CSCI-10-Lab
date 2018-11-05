#include <iostream>

using namespace std;


string encrypt(string input, int shift)
{
    for (int i = 0; i < input.length(); i++) {
        input[i] = (input[i] + shift > 'z' || input[i] + shift > 'Z') ? input[i] + shift - 26 : input[i] + shift;
    }

    return input;
}

int main()
{
    cout << encrypt("Zoo", 20) << endl;
}

