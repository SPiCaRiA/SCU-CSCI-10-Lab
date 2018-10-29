# Lab 06 Report

## Part A

### 1.

Pseudocode:

```
FUNCTION min_element(a : ARRAY OF TYPE INTEGER, length OF TYPE INTEGER) OF TYPE INTEGER
    DECLARE min OF TYPE INTEGER

    min = a[0]

    FOR i = 1 TO length - 1,
      THEN
        IF a[i] < min,
          THEN
            min = a[i]
        ENDIF
    ENDFOR

    RETURN min
ENDFUNC
```


### 2.

[lab06A2.cpp](code/partA/lab06A2.cpp):

```cpp
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
```

Console run:

```sh
$ clang++ lab06A2.cpp -o ../../bin/partA/lab06A2

$ ../../bin/partA/lab06A2
1
```


### 3.

Pseudocode:

```
FUNCTION factarr(a : ARRAY OF TYPE INTEGER, fact : ARRAY OF TYPE BOOL,
                 size OF TYPE INTEGER) OF TYPE NONE
    FOR i = 0 TO size - 1,
      THEN
        fact[i] = isfact(a[i])
    ENDFOR
ENDFUNC
```


### 4.

[lab06A4.cpp](code/partA/lab06A4.cpp):

```cpp
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
```

Console run:

```sh
$ clang++ lab06A4.cpp -o ../../bin/partA/lab06A4

$ ../../bin/partA/lab06A4
1
1
0
0
0
1
```


### 5.

Pseudocode:

```
FUNCTION factors(n OF TYPE INTEGER, facts : ARRAY OF TYPE INTEGER)
    FOR i = 0 TO n,
      THEN
        IF n % i == 0,
          THEN
            facts[i] = 1
        ELSE
            facts[i] = 0
        ENDIF
    ENDFOR
ENDFUNC
```


### 6.

[lab06A6.cpp](code/partA/lab06A6.cpp):

```
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
```

Console run:

```sh
$ clang++ lab06A6.cpp -o ../../bin/partA/lab06A6

$ ../../bin/partA/lab06A6
0
1
1
1
0
0
1
```

