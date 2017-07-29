#include <iostream>
#include <string>
#include <stdlib.h>

using std::cout;
using std::endl;
using std::string;

struct student {
    int grade;
    int studentID;
    string name;
};

const int ARRAY_SIZE = 10;

string studentArray[ARRAY_SIZE] = {
    "Fred",
    "Tom",
    "Alistair",
    "Sasha",
    "Erin",
    "Belinda",
    "Leslie",
    "Candy",
    "Aretha",
    "Veronica"
};

int struct_compare(const void * voidA, const void * voidB) {
    string * a = (string *)(voidA);
    string * b = (string *)(voidB);
    cout << *a << " length: " << a->length() <<  '\n';
    cout << *b << " length: " << b->length() <<  '\n';

    cout << endl;
    cout << endl;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << studentArray[i];
        cout << "\n";
    }
    //return a->compare(*b);
    return 1;
}

int main() {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << studentArray[i];
        cout << "\n";
    }

    qsort(&studentArray, ARRAY_SIZE, sizeof(studentArray[0]), struct_compare);

    /*
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << studentArray[i];
        cout << "\n";
    }
    */
    return 0;
}   
