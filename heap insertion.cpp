#include <iostream>
#include <vector>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void heap(int arr[], int n, int i) {
    int largest = i;
    int l = i * 2 + 1;
    int r = i * 2 + 2;

    if (l < n && arr[l] > arr[largest]) {
        largest = l;
    }

    if (r < n && arr[r] > arr[largest]) {
        largest = r;
    }

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heap(arr, n, largest);
    }
}

void deleteRoot(int arr[], int &n) {
    int lastElement = arr[n - 1];
    arr[0] = lastElement;
    n = n - 1;
    heap(arr, n, 0);
}

int main() {
    char choose;
    int m;
    int p;

    cout << "Enter how many numbers you want to enter: ";
    cin >> m;

    int arr[m];

    cout << "Enter the values: ";
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }

    for (int i = m / 2 - 1; i >= 0; i--) {
        heap(arr, m, i);
    }

    cout << "Heapified array: "<<endl;
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }

        cout <<endl<< "What do you want to choose: insert (I) or delete (D)? ";
        cin >> choose;

        switch (choose) {
            case 'I': {
                cout<<"enter what you want to insert: ";
                cin>>m;
                heap(arr,m,0);
                cout<<"new array is : ";
                for (int i = 0; i < m; i++) {
                cout << arr[i] << " ";
        }

                break;
            }
            case 'D': {
                cout << "Enter the index you want to delete: ";
                cin >> p;
                deleteRoot(arr, m);
                cout << "Heap after deletion: ";
                for (int i = 0; i < m; i++) {
                    cout << arr[i] << " ";
                }
                break;
            }
            default: {
                cout<<"wrong choice";
                break;
            }
        }

   return 0;
}

