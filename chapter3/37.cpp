#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;

const int SIZE = 50; 

int array[SIZE];

int compare(const void * voidA, const void * voidB) {
    int * a = (int *)(voidA);
    int * b = (int *)(voidB);
    return *a - *b;
}

int mode(int array[], int SIZE) {
    qsort(array, SIZE, sizeof(int), compare);
    int max = 0;
    int max_val = array[0];
    int curr = array[0];
    int count = 0;
    for(int i = 1; i < SIZE; i++) {
        if(array[i] != curr) {
            curr = array[i];
            if(max < count) {
                max = count; 
                max_val = array[i-1]; 
            }
            count = 0;
        }
        else count++;
    }
    return max_val;
}

void test(int array[], int SIZE) {
    int a[SIZE];
    for(int i = 0; i < SIZE; i++) {
        a[i] = 0;
    }
    for(int i = 0; i < SIZE; i++) {
        a[array[i]]++;
    }
    for(int i = 0; i < SIZE; i++) {
        cout << i << ": " << a[i] << endl;
    }
    cout << endl;
}
int main() {
    srand(time(NULL));
    int random_number;
    int j = 0;
    for(int i = 0; i < SIZE; i++) {
        random_number = std::rand()%(SIZE/2);
        array[i] = random_number;
    }
    for(int i = 0; i < SIZE; i++) {
        cout << array[i] << " "; 
    }
    cout << endl; 
    test(array, SIZE); 
    cout << mode(array, SIZE) << endl;
}

