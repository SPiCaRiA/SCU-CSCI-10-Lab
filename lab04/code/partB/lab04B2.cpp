#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int die(int n)
{
    srand(time(NULL));
    return rand() % n + 1;
}

int main()
{
    cout << die(10) << endl;
    return 0;
}

