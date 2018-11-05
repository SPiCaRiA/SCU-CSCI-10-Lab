#include <iostream>

using namespace std;


string substring(string str1, int start, int lengths)
{
   string result="";

    for (int i = start; i < start + lengths; i++) {
        result += str1[i];
    }

    return result;
}

int main()
{
    cout << substring("abracadabra", 3, 5) << endl;
}

