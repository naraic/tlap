#include <cstdlib>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

struct student {
    int student_no;
    char* name;
    //int name;
};

const int SIZE = 5;
student students[SIZE] = {
    { 6, "test" },
    { 2, "testy" },
    { 1, "testing" },
    { 5, "tester" },
    { 4, "tests" }
};

/*
student students[SIZE] = {
    { 6, 1 },
    { 2, 5 },
    { 1, 6 },
    { 5, 2 },
    { 4, 3 }
};
*/

void print_names(student students[], int size) {
    cout << "names: ";
    for(int i = 0; i < size; i++) {
        cout << students[i].name << " ";
    }
    cout << endl;
}

void print_student_no(student students[], int size) {
    cout << "student no : ";
    for(int i = 0; i < size; i++) {
        cout << students[i].student_no << " ";
    }
    cout << endl;
}

int compare(const void  * voidA, const void * voidB) {
    student * a = (student *)voidA;
    student * b = (student *)voidB;
    return a->student_no - b->student_no;
}

int main() {
    print_names(students, SIZE);
    print_student_no(students, SIZE);
    qsort(students, SIZE, sizeof(student), compare);
    print_names(students, SIZE);
    print_student_no(students, SIZE);
}
