#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;

const int SIZE = 26; 

char alphabet[SIZE];
char cipher[SIZE];

bool allone(char alphabet[], int SIZE) {
    for(int i = 0; i < SIZE; i++) {
        if(alphabet[i] != 1)
            return false;
    }
    return true;
}

int main() {
    srand(time(NULL));
    int random_number;

    for(int i = 0; i < SIZE; i++) {
        alphabet[i] = 'a'+i;
    }
    int r;
    int n = 0;
    while(!allone(alphabet, SIZE)) {
        r = std::rand()%SIZE;
        if(alphabet[r] != 1) {
            cipher[n++] = alphabet[r];
            alphabet[r] = 1;
        }
    }
    for(int i = 0; i < SIZE; i++) {
        cout << cipher[i] << " ";
    }
    cout << endl;
}
