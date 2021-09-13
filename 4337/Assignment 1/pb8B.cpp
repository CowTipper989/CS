#include <iostream>
using namespace std;

void quicksort(int*, int, int, int);
void printarray(int*, int);

int main(){
    int size = 5;
    int low = 0;
    int high = size;
    int array[5] = {2, 0, 3, 4, 1};

    cout << "Unsorted array: ";
    printarray(array, size);
    cout << "\n";

    cout << "Sorted array: ";
    quicksort(array, low, high, size);
    printarray(array, size);
    cout << "\n";

    return 0;
}

void quicksort(int* array, int low, int high, int size) {
    if (low < high) {
        int piv1 = low + high;
        int piv2 = piv1 / 2;
        int piv = array[piv2];
        int tmp;
        int i = low;
        int j = high;
        int inc = low;

        while (inc < size) {
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
            if (j > low) {
                high = j;
                piv1 = low + high;
                piv2 = piv1 / 2;
                piv = array[piv2];
                i = low;
            }
            if (i < high) {
                low = i;
                piv1 = low + high;
                piv2 = piv1 / 2;
                piv = array[piv2];
                j = high;
            }
            }
            inc++;
        }
    }
}

void printarray(int* array, int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << ' ';
    }
}