#include<iostream>
using namespace std;

  void swap(int *a, int *b){
  int temp = *a;
  *a=*b;
  *b=temp;
  };
  int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int left = low + 1;
    int right = high;

    while (left <= right) {
        while (left <= right && arr[left] <= pivot) {
            left++;
        }

        while (left <= right && arr[right] > pivot) {
            right--;
        }

        if (left < right) {
            swap(&arr[left], &arr[right]);
        }
    }

    swap(&arr[low], &arr[right]);

    return right;
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quicksort(arr, low, pivotIndex - 1);
        quicksort(arr, pivotIndex + 1, high);
    }
}
int main(){
int m;
    int arr[20];
    cout << "How many elements you want to enter: "<<endl;
    cin >> m;

    for (int i = 0; i < m; i++) {
        cout << "Enter value for arr[" << i << "]: ";
        cin >> arr[i];
    }

    cout << "Array elements before swapping: "<<endl;
    for (int i = 0; i < m ; i++) {
        cout << arr[i] << " "<<endl;
    }

    quicksort(arr, 0,m - 1);

    cout << "Array elements after swapping: ";
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }

    return 0;

}
