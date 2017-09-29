//string linked lists

#include<iostream>

using std::cout;
using std::endl;

struct charNode {
    char c;
    charNode * next;
};

typedef charNode * linkedString; 

void append(linkedString& s, char c);
void output(linkedString s);
char characterAt(linkedString s, int n);
void concatenate(linkedString& s1, linkedString s2);
void removeChars(linkedString& s, int n, int m);

int main() {
    linkedString s = NULL;
    append(s, 'h');
    append(s, 'e');
    append(s, 'l');
    append(s, 'l');
    append(s, 'o');
    append(s, ' ');
    linkedString s2 = NULL;
    append(s2, 'w');
    append(s2, 'o');
    append(s2, 'r');
    append(s2, 'l');
    append(s2, 'd');
    output(s);
    output(s2);
    cout << characterAt(s, 0) << endl;
    cout << characterAt(s, 2) << endl;
    cout << characterAt(s, 4) << endl;
    concatenate(s, s2);
    output(s);
    linkedString s1 = NULL;
    concatenate(s, s1);
    output(s);
    concatenate(s1, s);
    output(s1);
    removeChars(s1, 5, 1);
    output(s1);
    return 0;
}
    
//to end
void append(linkedString& s, char c) {
    charNode * newC = new charNode;
    newC->c = c;
    //find end
    if(s == NULL) {
        s = newC;
        return;
    }
    charNode * charIter = s;
    while(charIter->next != NULL) {
        charIter = charIter->next;
    }
    charIter->next = newC;
}

char characterAt(linkedString s, int n) {
   for(int i = 0; i < n; i++) {
       s = s->next;
   }
   return s->c;
}

void output(linkedString s) {
    while(s != NULL) {
        cout << s->c;
        s = s->next;
    }
    cout << endl;
}

void concatenate(linkedString& s1, linkedString s2) {
    charNode * iter = s1;
    if(s1 != NULL) {  
        while(iter->next != NULL) { 
            iter = iter->next;
        }
    }
    while(s2 != NULL) {
        charNode * newN = new charNode;
        newN->c = s2->c;
        s2 = s2->next;
        //this is gross but... 
        if(s1 == NULL)  {
            s1 = newN;
            iter = newN;
        }
        else iter->next = newN;
        iter = newN;
    }
}

void removeChars(linkedString& s, int n, int m) {
    charNode * iterator = s;
    for(int i = 0; i < n; i++) {
        iterator = iterator->next;
    }
    charNode * start = iterator;
    for(int i = 0; i < m; i++) {
        charNode * deleteMe= iterator;
        iterator = iterator->next;
        delete[] deleteMe;
    }
    charNode * end = iterator;
    start->next = end;
}
