#include <iostream>

using std::cout;

bool sorted(int array[], int size) {
    for(int i = 1; i < size; i++) {
        if (array[i-1] > array[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int size = 5;
    int array[] = { 1, 3, 3, 4, 10 };
    if (sorted(array, size)) 
        cout << "sorted\n";
    else 
        cout << "not sorted\n";
}

