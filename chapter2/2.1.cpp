#include <iostream>

using std::cout;

int main() {
    for(int i = 0; i < 4; i++) {
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
}


                

