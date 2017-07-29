#include <iostream>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

char cipher[] = { 'e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z', 'a','b','c','d' };
void encode(char c) {
    cout << "encoding " << c << endl;
    if(c >= 'A' && c <= 'Z') {
        cout << "if true" << endl;
        cout << cipher[c - 'A'];
    }
    else {
        cout << "if false" << endl;
        cout << c;
    }
}

int main() {
    string c;
    cin >> c;
    do {
        encode(c);
        cin >> c;
    } while( c != '\0');
}
