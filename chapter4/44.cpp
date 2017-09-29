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

void append(arrayString& str, char c);
void concatenate(arrayString& s1, arrayString s2);
char characterAt(arrayString str, int n);
void output(arrayString str);

int main() {
    //testing
    arrayString str1 = new char[6];
    str1[0] = 5; str1[1] = 'h', str1[2] = 'e'; str1[3] = 'l'; str1[4] = 'l'; str1[5] = 'o'; 
    arrayString str2 = new char[6];
    str2[0] = 5; str2[1] = 'w'; str2[2] = 'o'; str2[3] = 'r'; str2[4] = 'l'; str2[5] = 'd'; 
    output(str1); 
    output(str2); 
    append(str1, 'x');
    output(str1); 
    cout << "character 6 should be x: " << characterAt(str1, 5) << endl;
    concatenate(str1, str2);
    output(str1);
    return 0;
}


void append(arrayString&  str, char c) {
    //max str len
    if((int)str[0] == MAX) {
        return;
    }
    arrayString newS = new char[str[0]+1];
    newS[0] = str[0]+1;
    for(int i = 1; i <= str[0]; i++) {
        newS[i] = str[i];
    }
    newS[newS[0]] = c;
    delete[] str;
    str = newS;
}

void concatenate(arrayString& s1, arrayString s2) {
    int newLen =  (int)s1[0] + s2[0];
    if (newLen > MAX) {
        return;
    }
    arrayString newS = new char[s1[0] + s2[0]];
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
