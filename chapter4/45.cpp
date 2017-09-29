//remove record

#include <iostream>

using std::endl;
using std::cout;


struct listNode {
    int studentNum;
    int grade;
    listNode * next;
};
typedef listNode * studentCollection;

void removeRecord(studentCollection& sc, int studentNo);
void addRecord(studentCollection& sc, int studentNo, int gr);
void output(studentCollection sc);

int main() {
    studentCollection sc = NULL;
    addRecord(sc, 1, 50);
    addRecord(sc, 2, 51);
    addRecord(sc, 3, 52);
    addRecord(sc, 4, 54);
    output(sc);
    removeRecord(sc, 3);
    output(sc);
    removeRecord(sc, 4);
    output(sc);
    removeRecord(sc, 1);
    output(sc);
    return 0;
}

//remove student record for student number n
void removeRecord(studentCollection& sc, int n) {
    listNode * listPointer = sc;
    listNode * trailing = NULL;
    while(listPointer != NULL  && listPointer->studentNum != n) {
        trailing = listPointer;
        listPointer = listPointer->next;
    }
    //empty list or record not found
    if(listPointer == NULL) {
        return;
    }
    //first record removal
    if(trailing == NULL) {
        sc = listPointer->next;
        return;
    }
    trailing->next = listPointer->next;
    delete[] listPointer;
}

void addRecord(studentCollection& sc, int studentNo, int gr) {
    listNode * newNode = new listNode;
    newNode->studentNum = studentNo;
    newNode->grade = gr;
    newNode->next = sc;
    sc = newNode;
}

void output(studentCollection sc) {
    while(sc != NULL) {
        cout << "number: " << sc->studentNum << " grade: " << sc->grade << endl;
        sc = sc->next;
    }
    cout << "--end of collection--" << endl;
}
