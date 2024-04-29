//2. Write a program of to sort the array using templates
#include <iostream>
using namespace std;
template<typename T>
void quickSort(T arr[], int left, int right) {
    int i = left, j = right;
    T pivot = arr[(left + right) / 2];

    while (i <= j) {
        while (arr[i] < pivot) {
            ++i;
        }
        while (arr[j] > pivot) {
            --j;
        }
        if (i <= j) {
            swap(arr[i], arr[j]);
            ++i;
            --j;
        }
    }

    if (left < j) {
        quickSort(arr, left, j);
    }
    if (i < right) {
        quickSort(arr, i, right);
    }
}

template<typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArray[] = {5, 2, 9, 1, 6};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);

    cout << "Before sorting:" << endl;
    printArray(intArray, intSize);

    quickSort(intArray, 0, intSize - 1);

    cout << "After sorting:" << endl;
    printArray(intArray, intSize);

    return 0;
}

