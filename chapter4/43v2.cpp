#include <iostream>
using std::cout;
using std::endl;

typedef char * arrayString ;

int arrayStringLen(arrayString s); 	
void replaceString(arrayString source, arrayString target, arrayString replaceText);
int countMatches(arrayString haystack, arrayString needle);

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

void replaceString(arrayString source, arrayString target, arrayString replaceText) {
    int lenS = arrayStringLen(source);
    int lenT = arrayStringLen(target);
    int lenR = arrayStringLen(replaceText);
    int count = countMatches(source, target);
    cout << count << endl;
}

int arrayStringLen(arrayString s) {	
    int lenS;
    for (lenS = 0; s[lenS] != 0; lenS++);
    return lenS;
}

int countMatches(arrayString haystack, arrayString needle) {
    int count = 0;
    int lenN = arrayStringLen(needle);
    int last_possible = arrayStringLen(haystack) - lenN;
    for(int i = 0; i <= last_possible; i++) {
        int j = 0;
        while(haystack[i+j] == needle[j] && needle[j] != 0) {
            j++;
        }
        if(j == lenN)
            count++;
    }
    return count;
}


        
            






