#include <iostream>
using std::cout;
using std::endl;

typedef char * arrayString ;

int arrayStringLen(arrayString s); 	
int replaceFirst(arrayString& haystack, arrayString needle, arrayString pin);
void replaceString(arrayString& source, arrayString target, arrayString replaceText);

int main() {
    arrayString s = new char[9];
    s[0] = 'a'; s[1] = 'b'; s[2] = 'c'; s[3] = 'd'; s[4] = 'a'; s[5] = 'b'; s[6] = 'e'; s[7] = 'e'; s[8] = 0;
    arrayString t = new char[3];
    t[0] = 'a'; t[1] = 'b'; t[2] = 0;
    arrayString r = new char[4];
    r[0] = 'x'; r[1] = 'y'; r[2] = 'z'; r[3] = 0;
    cout << s << endl;
    replaceString(s, t, r);
    cout << s << endl;
}

void replaceString(arrayString& source, arrayString target, arrayString replaceText) {
    while(replaceFirst(source, target, replaceText))
        ;
}

int arrayStringLen(arrayString s) {	
    int i;
    for (i = 0; s[i] != 0; i++);
    return i;
}

int replaceFirst(arrayString& haystack, arrayString needle, arrayString pin) {
    arrayString newS, newS_ptr; 
    arrayString haystack_ptr, needle_ptr, haystack_backup;
    haystack_backup = haystack;
    haystack_ptr = haystack;
    while(*haystack_ptr) {
        needle_ptr = needle;
        while(*needle_ptr == *haystack_ptr) {
            needle_ptr++;
            haystack_ptr++;
        }
        if (!*needle_ptr) {
            newS = new char[ arrayStringLen(haystack) -
                             arrayStringLen(needle) +
                             arrayStringLen(pin)];
            newS_ptr = newS;
            while(&(*haystack) != &(*haystack_ptr)) {
                    *newS = *haystack;
                    newS++;
                    haystack++;
            }
            *newS = 0;
            cout << newS_ptr << endl;
            needle_ptr = needle;
            while(*needle_ptr) {
                haystack++;
                needle_ptr++;
            }
            while(*pin) {
                *newS = *pin;
                newS++;
                pin++;
            }
            *newS = 0;
            cout << newS_ptr << endl;
            while(*haystack) {
                *newS = *haystack;
                newS++;
                haystack++;
            }
            *newS = 0;
            cout << newS_ptr << endl;

            delete[] haystack_backup;
            haystack = newS_ptr;
            return 1;
        }
        else {
            haystack_ptr++;
        }
    }
    return 0;
}
