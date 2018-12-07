# Lab 10 Report

## Part A

### 1.

[lab10A1.cpp](code/lab10A1.cpp):

```cpp
#include <iostream>
#include <string>
#include <vector>

using namespace std;


struct Transcript{
    double grades[100];
    string classes[100];
    int num;
};

struct Student{
    string name;
    int idNumber;
    int year;
    Transcript t;
};

void initializeStudent(Student& s);
void fillTranscript(Transcript& t);
void printStudent(const Student& s);
void printTranscript(const Transcript& t);

int main()
{
    Student me;
    initializeStudent(me);
    printStudent(me);

    return 0;
}

void initializeStudent(Student& s)
{
    string dummy;

    cout << "please enter a name" << endl;
    getline(cin, s.name);
    cout << "please enter an ID number" << endl;
    cin >> s.idNumber;
    cout << "Please enter your year as a number 1‐4"<< endl;
    cin >> s.year;
    getline(cin, dummy);

    fillTranscript(s.t);
}

void fillTranscript(Transcript& t)
{
    string course;//note ‐ class is a reserved word
    double grade = 0;
    string dummy;

    cout << "Please enter the name of the next class, done when done" << endl;
    getline(cin, course);
    t.num = 0;

    while(course != "done") {
        cout << "Please enter your grade in " << course << endl;
        cin >> grade;
        getline(cin, dummy); //consume

        t.classes[t.num] = course;
        t.grades[t.num] = grade;
        t.num++;

        cout << "Please enter the name of the next class, done when done"<< endl;
        getline(cin, course);
    }
}

void printStudent(const Student& s)
{
    cout << "Name:" << s.name << endl;
    cout << "ID number:" << s.idNumber << endl;
    cout << "year:" << s.year << endl;
    printTranscript(s.t);
}

void printTranscript(const Transcript& t)
{
    cout << "Transcript: " << endl;
    for(int i = 0; i < t.num; i++){
        cout << t.classes[i] << ": " << t.grades[i] << endl;
    }
}
```


### 2.

[lab10A2.cpp](code/lab10A2.cpp):

```cpp
#include <iostream>
#include <string>
#include <vector>

using namespace std;


struct Transcript{
    double grades[100];
    string classes[100];
    int num;
};

struct Student{
    string name;
    int idNumber;
    int year;
    Transcript t;
};

void initializeStudent(Student& s);
void fillTranscript(Transcript& t);
void printStudent(const Student& s);
void printTranscript(const Transcript& t);

int main()
{
    Student me;
    initializeStudent(me);
    printStudent(me);

    return 0;
}

void initializeStudent(Student& s)
{
    string dummy;

    cout << "please enter a name" << endl;
    getline(cin, s.name);
    cout << "please enter an ID number" << endl;
    cin >> s.idNumber;
    cout << "Please enter your year as a number 1‐4"<< endl;
    cin >> s.year;
    getline(cin, dummy);

    fillTranscript(s.t);
}

Student initializeStudent()
{
    Student s;

    s.name = "";
    s.idNumber = 0;
    s.year = -1;

    return s;
}

Student initializeStudent(string n)
{
    Student s;

    s.name = n;
    s.idNumber = 0;
    s.year = -1;

    return s;
}

Student initializeStudent(int i)
{
    Student s;

    s.name = "";
    s.idNumber = i;
    s.year = -1;

    return s;
}

void fillTranscript(Transcript& t)
{
    string course;//note ‐ class is a reserved word
    double grade = 0;
    string dummy;

    cout << "Please enter the name of the next class, done when done" << endl;
    getline(cin, course);
    t.num = 0;

    while(course != "done") {
        cout << "Please enter your grade in " << course << endl;
        cin >> grade;
        getline(cin, dummy); //consume

        t.classes[t.num] = course;
        t.grades[t.num] = grade;
        t.num++;

        cout << "Please enter the name of the next class, done when done"<< endl;
        getline(cin, course);
    }
}

void printStudent(const Student& s)
{
    cout << "Name:" << s.name << endl;
    cout << "ID number:" << s.idNumber << endl;
    cout << "year:" << s.year << endl;
    printTranscript(s.t);
}

void printTranscript(const Transcript& t)
{
    cout << "Transcript: " << endl;
    for(int i = 0; i < t.num; i++){
        cout << t.classes[i] << ": " << t.grades[i] << endl;
    }
}
```


### 3.

[lab10A3.cpp](code/lab10A3.cpp):

```
#include <iostream>
#include <string>
#include <vector>

using namespace std;


typedef struct{
    double grades[100];
    string classes[100];
    int num;
} Transcript;

typedef struct{
    string name;
    int idNumber;
    int year;
    Transcript t;
} Student;

void initializeStudent(Student& s);
void fillTranscript(Transcript& t);
void printStudent(const Student& s);
void printTranscript(const Transcript& t);

int main()
{
    Student me;
    initializeStudent(me);
    printStudent(me);

    return 0;
}

void initializeStudent(Student& s)
{
    string dummy;

    cout << "please enter a name" << endl;
    getline(cin, s.name);
    cout << "please enter an ID number" << endl;
    cin >> s.idNumber;
    cout << "Please enter your year as a number 1‐4"<< endl;
    cin >> s.year;
    getline(cin, dummy);

    fillTranscript(s.t);
}

void fillTranscript(Transcript& t)
{
    string course;//note ‐ class is a reserved word
    double grade = 0;
    string dummy;

    cout << "Please enter the name of the next class, done when done" << endl;
    getline(cin, course);
    t.num = 0;

    while(course != "done") {
        cout << "Please enter your grade in " << course << endl;
        cin >> grade;
        getline(cin, dummy); //consume

        t.classes[t.num] = course;
        t.grades[t.num] = grade;
        t.num++;

        cout << "Please enter the name of the next class, done when done"<< endl;
        getline(cin, course);
    }
}

void printStudent(const Student& s)
{
    cout << "Name:" << s.name << endl;
    cout << "ID number:" << s.idNumber << endl;
    cout << "year:" << s.year << endl;
    printTranscript(s.t);
}

void printTranscript(const Transcript& t)
{
    cout << "Transcript: " << endl;
    for(int i = 0; i < t.num; i++){
        cout << t.classes[i] << ": " << t.grades[i] << endl;
    }
}
```


### 4.

[lab10A4.cpp](code/lab10A4.cpp):

```cpp
#include <iostream>
#include <string>
#include <vector>

//using namespace std;


typedef struct{
    double grades[100];
    std::string classes[100];
    int num;
} Transcript;

typedef struct{
    std::string name;
    int idNumber;
    int year;
    Transcript t;
} Student;

void initializeStudent(Student& s);
void fillTranscript(Transcript& t);
void printStudent(const Student& s);
void printTranscript(const Transcript& t);

int main()
{
    Student me;
    initializeStudent(me);
    printStudent(me);

    return 0;
}

void initializeStudent(Student& s)
{
    std::string dummy;

    std::cout << "please enter a name" << std::endl;
    getline(std::cin, s.name);
    std::cout << "please enter an ID number" << std::endl;
    std::cin >>s.idNumber;
    std::cout<<"Please enter your year as a number 1‐4"<<std::endl;
    std::cin>>s.year;
    getline(std::cin, dummy);

    fillTranscript(s.t);
}

void fillTranscript(Transcript& t)
{
    std::string course;//note ‐ class is a reserved word
    double grade = 0;
    std::string dummy;

    std::cout << "Please enter the name of the next class, done when done" << std::endl;
    getline(std::cin, course);
    t.num = 0;

    while(course != "done") {
        std::cout << "Please enter your grade in " << course << std::endl;
        std::cin >> grade;
        getline(std::cin, dummy); //consume

        t.classes[t.num] = course;
        t.grades[t.num] = grade;
        t.num++;

        std::cout << "Please enter the name of the next class, done when done"<<std::endl;
        getline(std::cin, course);
    }
}

void printStudent(const Student& s)
{
    std::cout << "Name:" << s.name << std::endl;
    std::cout << "ID number:" << s.idNumber << std::endl;
    std::cout << "year:" << s.year << std::endl;
    printTranscript(s.t);
}

void printTranscript(const Transcript& t)
{
    std::cout << "Transcript: " << std::endl;
    for(int i = 0; i < t.num; i++){
        std::cout << t.classes[i] << ": " << t.grades[i] << std::endl;
    }
}
```

### 5.

[lab10A5.cpp](code/lab10A5.cpp):

```cpp
#include <iostream>
#include <string>
#include <vector>

using namespace std;


struct Transcript{
    double grades[100];
    string classes[100];
    size_t num;
};

struct Student{
    string name;
    size_t idNumber;
    size_t year;
    Transcript t;
};

void initializeStudent(Student& s);
void fillTranscript(Transcript& t);
void printStudent(const Student& s);
void printTranscript(const Transcript& t);

int main()
{
    Student me;
    initializeStudent(me);
    printStudent(me);

    return 0;
}

void initializeStudent(Student& s)
{
    string dummy;

    cout << "please enter a name" << endl;
    getline(cin, s.name);
    cout << "please enter an ID number" << endl;
    cin >> s.idNumber;
    cout << "Please enter your year as a number 1‐4"<< endl;
    cin >> s.year;
    getline(cin, dummy);

    fillTranscript(s.t);
}

void fillTranscript(Transcript& t)
{
    string course;//note ‐ class is a reserved word
    double grade = 0;
    string dummy;

    cout << "Please enter the name of the next class, done when done" << endl;
    getline(cin, course);
    t.num = 0;

    while(course != "done") {
        cout << "Please enter your grade in " << course << endl;
        cin >> grade;
        getline(cin, dummy); //consume

        t.classes[t.num] = course;
        t.grades[t.num] = grade;
        t.num++;

        cout << "Please enter the name of the next class, done when done"<< endl;
        getline(cin, course);
    }
}

void printStudent(const Student& s)
{
    cout << "Name:" << s.name << endl;
    cout << "ID number:" << s.idNumber << endl;
    cout << "year:" << s.year << endl;
    printTranscript(s.t);
}

void printTranscript(const Transcript& t)
{
    cout << "Transcript: " << endl;
    for(size_t i = 0; i < t.num; i++){
        cout << t.classes[i] << ": " << t.grades[i] << endl;
    }
}
```
