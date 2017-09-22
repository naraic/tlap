#include <iostream>

using std::cout;
using std::endl;

const int MAX = 255;

//in this string the first value represents the length and the string has no null terminator! :O
typedef char * arrayString;

//append 
//concatinate
//characterAt
//output

void append(arrayString str, char c);

void append(arrayString&  str, char c) {
    //max str len
    if(str[0] == MAX) {
        return;
    }
    arrayString newS = new char[str[0]+1];
    newS[0] = str[0]+1;
    for(int i = 1; i <= str[0]; i++) {
        newS[i] = str[0];
    }
    news[newS[0]] = c;
    delete[] str;
    str = newS;
}

void concatenate(arrayString& s1, arrayStrings s2) {
    int newLen =  (int)s1[0] + s2[0];
    if (newLen > MAX) {
        return;
    }
    arrayString newS = new char[s1[0] + s2[0]]
    newS[0] = newLen;
    for(int i = 1; i <= s1[0]; i++) {
        newS[i] = s1[i]; 
    }
    for(int i = 1; i <= s2[0]; i++) {
        newS[s1[0]+i] = s2[i];
    } 
    delete[] s1;
    s1 = newS;
}

char characterAt(arrayString str, int n) {
    if (n > str[0]) {
        return 0;
    }
    return str[n+1];
}

void output(arrayString str) {
    for(int i = 1; i <= str[0]; i++) {
        cout << str[i];
    }
    cout << endl;
}
