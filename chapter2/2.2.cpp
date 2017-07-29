#include <iostream>

using std::cout;

void print(int i) {
    for(int j = 0; j <= 8; j++) {
        if(j-i < 0) 
            cout << ' ';
        else if(j+i >= 8) {
            cout << '\n';
            break;
        }
        else
            cout << '#';
    }
}

int main() {
    for(int i = 0; i < 4; i++) {
        print(i);
    }

    for(int i = 3; i >= 0; i--) {
        print(i);
    }
    return 0;
}


