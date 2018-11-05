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

bool compare_string(string str1, string str2)
{
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] != str2[i]) {
            return false;
        }
    }
    return true;
}

int find_index(string protein, string dna)
{
    int length = protein.length();

    for (int i = 0; i < dna.length(); i++) {
        if (compare_string(substring(dna, i, length), protein)) {
            return i;
        }
    }

    return -1;
}

int main()
{
    cout << "index of AATG: " << find_index("AATG", "ATGCAGAAAGCTACGATCAATGATCGATC AATGGAT") << endl;
}

