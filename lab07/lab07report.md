# Lab 07 Report

## Part A

### 1.

Psuedocode:

```
FUNCTION substring(str OF TYPE STRING, start OF TYPE INTEGER, length OF TYPE INTEGER) OF TYPE STRING
    DECLARE i OF TYPE INTEGER
    DECLARE result : ARRAY[length] OF TYPE CHARACTER

    FOR i = start TO start + length,
      THEN
        result[i] = str[i]
    ENDFOR

    RETURN result
ENDFUNC
```


### 2.

[lab07A2.cpp](code/partA/lab07A2.cpp):

```cpp
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
```

Command line run:

```sh
$ clang++ lab07A2.cpp -o ../../bin/partA/lab07A2

$ ../../bin/partA/lab07A2
acada
```


### 3.

Psuedocode:

```
FUNCTION compare_string(str1 OF TYPE STRING, str2 OF TYPE STRING) OF TYPE BOOL
    DECLARE i OF TYPE INTEGER

    FOR i = 0 TO str1.length(),
      THEN
        IF str1[i] != str2[i],
          THEN
            RETURN FALSE
        ENDIF
    ENDFOR

    RETURN TRUE
ENDFUNC

FUNCTION find(protein OF TYPE STRING, dna OF TYPE STRING) OF TYPE INTEGER
    DECLARE length OF TYPE INTEGER
    DECLARE i OF TYPE INTEGER

    length = protein.length()

    FOR i = 0 TO dna.length(),
      THEN
        IF dna[i] == protein[0],
          THEN
            IF compare_string(substring(dna, i, length), protein),
              THEN
                RETURN i
            ENDIF
        ENDIF
    ENDFOR

    RETURN -1
ENDFUNC
```


### 4.

[lab07A4.cpp](code/partA/lab07A4.cpp):

```cpp
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
```

Command line run:

```sh
$ clang++ lab07A4.cpp -o ../../bin/partA/lab07A4

$ ../../bin/partA/lab07A4
index of AATG: 18
```


## Part B

### 1.

Psuedocode:

```
FUNCTION encrypt(in OF TYPE STRING, shift OF TYPE INTEGER) OF TYPE STRING
    DECLARE i OF TYPE INTEGER

    FOR i = 0 TO in.length(),
      THEN
        in[i] = in[i] + shift
    ENDFOR

    RETURN in
ENDFUNC
```


### 2.

[lab07B2.cpp](code/lab07B2.cpp):

```cpp
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
```

Command line run:

```sh
 clang++ lab07B2.cpp -o ../../bin/partB/lab07B2

$ ../../bin/partB/lab07B2
fdw
```


### 3.

Psuedocode:

```
FUNCTION encrypt(in OF TYPE STRING, shift OF TYPE INTEGER) OF TYPE STRING
    DECLARE i OF TYPE INTEGER

    FOR i = 0 TO in.length(),
      THEN
        IF in[i] + shift > 'z' OR in[i] + shift > 'Z',
          THEN
            in[i] = in[i] + shift - 26
        ELSE
            in[i] = in[i] + shift
    ENDFOR

    RETURN in
ENDFUNC
```


### 4.

[lab07B4.cpp](code/lab07B4.cpp):

```cpp
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
```

Command line run:

```sh
$ clang++ lab07B4.cpp -o ../../bin/partB/lab07B4

$ ../../bin/partB/lab07B4
Tii
```

