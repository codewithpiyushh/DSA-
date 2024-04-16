#include <iostream>
using namespace std;

int a[100];
int f = -1;
int r = -1;

void insert(int value) {
    if ((f == -1) && (r == -1)) {
        f = 0;
        r = 0;
        a[f] = value;
    } else {
        cout << "queue overflow" << endl;
    }
}

void del() {
    if ((f == -1) && (r == -1)) {
        cout << "empty" << endl;
    } else {
        f++;
    }
}

void display() {
    if (f >= 0) {
        cout << "the elements are " << endl;
        for (int i = r; i >= f; i--) {
            cout << a[i] << " ";
        }
        cout << endl;
    } else {
        cout << "queue is empty" << endl;
    }
}

int main() {
    int ch;
    int n;

    cout << "insert" << endl;
    cout << "delete" << endl;
    cout << "display" << endl;
    cout << "choose the option \n1. insert \n2. delete \n3. display"<< endl;
    cin >> ch;

    switch (ch) {
        case 1: {
            cout << "enter the element to insert" << endl;
            cin >> n;
            insert(n);
            break;
        }
        case 2: {
            del();
            break;
        }
        case 3: {
            display();
            break;
        }
        default:
            cout << "invalid choice";
    }

    return 0;
}


