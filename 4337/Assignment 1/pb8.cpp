#include <iostream>
using namespace std;

void quicksort(int);
void printarray(int, int);

int main(){
    int size = 2;
    int array[2] = {2, 0};

    printarray(array, size);

    return 0;
}

void quicksort(int array[]) {

}

void printarray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << ' ';
    }
}