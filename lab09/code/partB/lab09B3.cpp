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

