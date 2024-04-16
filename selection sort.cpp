#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void compare(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minimum = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minimum]) {
                minimum = j;
            }
        }
        if (minimum != i) {
            swap(arr[i], arr[minimum]);
        }
    }
}

int main() {
    int arr[] = {7, 5, 1, 6, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    compare(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
