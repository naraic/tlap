#include <iostream>

//decode a message

using std::cin;
using std::cout;


int main() {
    int end = 10; //return??
    int delim = ',';
    int digit = cin.get();

    while(digit != end) {
        int sum = 0;
        while(digit != delim && digit != end) {
            sum *= 10;
            sum += digit - '0';
            digit = cin.get();
        }
        cout << sum << "\n";
        if(digit != end) digit = cin.get();
    }
}
