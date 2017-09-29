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

int main() {
    linkedString s = NULL;
    append(s, 'h');
    append(s, 'e');
    append(s, 'l');
    append(s, 'l');
    append(s, 'o');
    output(s);
    cout << characterAt(s, 0) << endl;
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
