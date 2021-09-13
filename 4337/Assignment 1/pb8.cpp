#include <iostream>
using namespace std;

void quicksort(int*, int, int);
void printarray(int*, int);

int main(){
    int size = 2;
    int low = 0;
    int high = size;
    int array[2] = {2, 0};

    cout << "Unsorted array: ";
    printarray(array, size);
    cout << "\n";

    cout << "Sorted array: ";
    quicksort(array, low, high);
    printarray(array, size);
    cout << "\n";

    return 0;
}

void quicksort(int* array, int low, int high) {
    if (low < high) {
        int piv1 = low + high;
        int piv2 = piv1 / 2;
        int piv = array[piv2];
        int tmp;
        int i = low;
        int j = high;

        while (i <= j) {
            while (array[i] < piv) {
                i++;
            }
            while (array[j] > piv) {
                j--;
            }
            if (i <= j) {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
                i++;
                j--;
            }
        }
        if (j > low) {
            quicksort(array, low, j);
        }
        if (i < high) {
            quicksort(array, i, high);
        }
    }
}

void printarray(int* array, int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << ' ';
    }
}