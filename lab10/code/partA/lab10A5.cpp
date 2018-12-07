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
