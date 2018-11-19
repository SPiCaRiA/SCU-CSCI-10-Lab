# Lab 09 Report

## Part A

### 1.

Psuedocode:

```
DECLARE score_file OF TYPE FILE
DECLARE scores : ARRAY OF TYPE FLOAT
DECLARE i OF TYPE INTEGER

score_file = open("psycho-round2-scores2.txt")
i = 0

WHILE NOT score_file.EOF(),
  THEN
    scores[i] = score_file.read()
    i = i + 1
ENDWHILE

OUTPUT average(scores, i + 1), i + 1

score_file.close()
```


### 2.

[lab09A2.cpp](code/partA/lab09A2.cpp):

```cpp
#include <iostream>
#include <fstream>

using namespace std;


double average(double arr[], int size)
{
    double total = 0;

    for (int i = 0; i < size; i++) {
        total = total + arr[i];
    }

    return total / size;
}

int main()
{
    double average_score, scores[100];
    ifstream score_file("psycho-round2-scores2.txt");
    int i = 0;

    while (score_file >> scores[i++]) {
    }

    average_score = average(scores, i + 1);

    cout << "Average: " << average_score << endl
         << "Number of scores: " << i + 1 << endl;

    score_file.close();
}
```


### 3.

Psuedocode:

```
DECLARE score_file OF TYPE FILE
DECLARE output_file OF TYPE FILE
DECLARE scores : ARRAY OF TYPE FLOAT
DECLARE i OF TYPE INTEGER

score_file = open("psycho-round2-scores2.txt")
output_file = open("output.txt")
i = 0

WHILE NOT score_file.EOF(),
  THEN
    scores[i] = score_file.read()
    i = i + 1
ENDWHILE

output_file.write(average(scores, i + 1), i + 1)

score_file.close()
output_file.close()
```


### 4.

[lab09A4.cpp](code/partA/lab09A4.cpp):

```cpp
#include <iostream>
#include <fstream>

using namespace std;


double average(double arr[], int size)
{
    double total = 0;

    for (int i = 0; i < size; i++) {
        total = total + arr[i];
    }

    return total / size;
}

int main()
{
    double average_score, scores[100];
    ifstream score_file("psycho-round2-scores2.txt");
    ofstream output_file("output.txt");
    int i = 0;

    while (score_file >> scores[i++]) {
    }

    average_score = average(scores, i + 1);

    output_file << "Average: " << average_score << endl
         << "Number of scores: " << i + 1 << endl;

    score_file.close();
    output_file.close();
}
```


## Part B

### 1.

[lab09B1.cpp](code/partB/lab09B1.cpp):

```cpp
#include <string>

using namespace std;

struct StudentInfo {
    std::string lastname;
    std::string firstname;
    std::string class_level;
    double gpa;
};
```


### 2.

Psuedocode:

```
DECLARE student_file OF TYPE FILE
DECLARE students : ARRAY OF TYPE STUDENTINFO
DECLARE i OF TYPE INTEGER

student_file = open("studentlist1.txt")

WHILE NOT student_file.EOF(),
  THEN
    students[i] = READ STUDENTINFO
    i += 1
ENDWHILE

student_file.close()
```


### 3.

[lab09B3.cpp](code/partB/lab09B3.cpp):

```cpp
#include <iostream>
#include <fstream>

#include "lab09B1.cpp"


using namespace std;


int main()
{
    ifstream student_file("studentlist1.txt");
    StudentInfo students[100];

    for (int i = 0; !student_file.eof(); i++) {
        student_file >> students[i].firstname >> students[i].lastname >> students[i].class_level >> students[i].gpa;
    }
}
```

