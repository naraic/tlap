#include <iostream>
using std::cout;
using std::endl;

typedef char * arrayString ;

int arrayStringLen(arrayString s); 	
void replaceString(arrayString source, arrayString target, arrayString replaceText);

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
	int count = findMatches(source, target);
	cout << i << endl;
}
	
int arrayStringLen(arrayString s) {	
	int lenS;
	for (lenS = 0; s[i] != 0; lenS++);
	return lenS;
}

int findMatches(arrayString haystack, arrayString needle) {
    int count = 0;
	for(int i = 0; haystack[i] != 0; i++) {
        for (int j = 0; needle[j] != 0; j++) {
            while (needle[i] == needle[j])
            
            
            


