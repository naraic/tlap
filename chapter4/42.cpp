#include <iostream> 

using std::endl;
using std::cout;

typedef char * arrayString;

arrayString substring(arrayString s, int start, int len);

int main() {
    char const * test = "ebcdefg";
    cout << test << endl;
    arrayString newString = substring((char *)test, 3, 4);
    cout << newString << endl;
}

arrayString substring(arrayString s, int start, int len) {
    arrayString newS = new char[len+1];
    for(int i = start; i < start + len; i++) {
        newS[i-start] = s[i];
    }
    newS[len] = 0;
    return newS;
}


