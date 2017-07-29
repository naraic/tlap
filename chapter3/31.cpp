#include <iostream>
#include <string>
#include <stdlib.h>

using std::cout;
using std::string;
using std::endl;

struct student {
    int grade;
    int studentID;
    string name;
};


int compare(const void* voidA, const void* voidB) {
    student* a = (student*)(voidA);
    student* b = (student*)(voidB);
    return (a->grade - b->grade);
}

int main() {
    const int ARRAY_SIZE = 10;

    student studentArray[ARRAY_SIZE] = {
        {87, 10001, "Fred"},
        {28, 10002, "Tom"},
        {100, 10003, "Alistair"},
        {78, 10004, "Sasha"},
        {84, 10005, "Erin"},
        {98, 10006, "Belinda"},
        {75, 10007, "Leslie"},
        {70, 10008, "Candy"},
        {81, 10009, "Aretha"},
        {68, 10010, "Veronica"}
    };
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << studentArray[i].grade;
        cout << endl;
    }
    cout << endl;
    qsort(studentArray, ARRAY_SIZE, sizeof(student), compare);

    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << studentArray[i].grade;
        cout << endl;
    }
    return 0;
}   
