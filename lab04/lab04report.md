# Lab 04 Report

## Part A

### 1.

Output:

```
xxxxx
xxxxx
xxxxx
xxxxx
xxxxx
xxxxx
xxxxx
xxxxx
xxxxx
```


### 2.

Output:

```
xxxxxxxxx
xxxxxxxxx
xxxxxxxxx
xxxxxxxxx
xxxxxxxxx
```

### 3.

Output:

```
oxxxxxxxx
xoxxxxxxx
xxoxxxxxx
xxxoxxxxx
xxxxoxxxx
xxxxxoxxx
xxxxxxoxx
xxxxxxxox
xxxxxxxxo
```


### 4.

[lab04A4.cpp](code/partA/lab04A4.cpp):

```cpp
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
```

Command line run:

```sh
$ clang++ lab04A4.cpp -o ../../bin/partA/lab04A4

$ ../../bin/partA/lab04A4
0 0 0 3 2 1 6 4 2 9 6 3 12 8 4
```


## Part B

### 1.

Pseudocode:

```
FUNCTION die(n OF TYPE INTEGER) OF TYPE INTEGER
    RETURN rand() % n + 1
ENDFUNC
```


### 2.

[lab04B2.cpp](code/partB/lab04B2.cpp)

```cpp
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
```

Command line run:

```sh
$ clang++ lab04B2.cpp -o ../../bin/partB/lab04B2

$ ../../bin/partB/lab04B2
4

$ ../../bin/partB/lab04B2
9

$ ../../bin/partB/lab04B2
3
```


### 3.

Pseudocode:

```
FUNCTION is_even(n OF TYPE INTEGER) OF TYPE BOOLEAN
    RETURN n % 2 == 0
ENDFUNC
```


### 4.

[lab04B4.cpp](code/partB/lab04B4.cpp)

```cpp
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
```

Command line run:

```sh
$ clang++ lab04B4.cpp -o ../../bin/partB/lab04B4

$ ../../bin/partB/lab04B4
0 is even? 1
1 is even? 0
4 is even? 1
```

### 5.

Pseudocode:

```
FUNCTION is_even(n OF TYPE INTEGER) OF TYPE BOOLEAN
    RETURN n % 2 == 0
ENDFUNC

FUNCTION evens_between(n OF TYPE INTEGER, m OF TYPE INTEGER)
    DECLARE result, i OF TYPE INTEGER

    result = 0

    FOR i = n TO m,
      THEN
        result += is_even(i)
    RETURN result
ENDFUNC
```

### 6.

[lab04B6.cpp](code/partB/lab04B6.cpp)

```cpp
#include <iostream>

using namespace std;


int is_even(int n)
{
    return n % 2 == 0;
}

int evens_between(int n, int m)
{
    int result = 0;

    for (int i = n; i <= m; i++) {
        result += is_even(i);
    }

    return result;
}

int main()
{
    cout << evens_between(0, 6) << endl;
    cout << evens_between(1, 8) << endl;
    cout << evens_between(3, 10) << endl;

    return 0;
}
```

Command line run:

```sh
$ clang++ lab04B6.cpp -o ../../bin/partB/lab04B6

$ ../../bin/partB/lab04B6
4
4
4
```

