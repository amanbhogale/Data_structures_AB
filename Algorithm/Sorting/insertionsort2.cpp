#include <iostream>
using namespace std;
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Find the insertion position using binary search
        int pos = lower_bound(arr, arr + i, key) - arr;

        // Shift elements to the right
        for (int k = i - 1; k >= pos; k--) {
            arr[k + 1] = arr[k];
        }

        // Insert the current element at the correct position
        arr[pos] = key;
    }
}

int main() {
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << std::endl;

    return 0;
}
