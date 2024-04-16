#include<iostream>
using namespace std;

int value, n = 100, arr[100];
int top = -1;

void push(int value) {
    if (top == n - 1) {
        cout << "stack is overflow";
    } else {
        top = top + 1;
        arr[top] = value;
    }
}

void pop(int value) {
    if (top == -1) {
        cout << "stack is underflow";
    } else {
        cout << "popped element is " << arr[top] << endl;
        top = top - 1;
    }
}

void display() {
    if (top >= 0) {
        cout << "the elements are " << endl;
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        cout << "stack is empty" << endl;
    }
}

int main() {
    cout << "push number" << endl;
    cout << "pop number" << endl;
    cout << "display the stack" << endl;
    cout << "exit" << endl;
    int ch;
    do {
        cout << "enter choice" << endl;
        cin >> ch;
        switch (ch) {
            case 1: {
                cout << "enter the value to be pushed" << endl;
                cin >> value;
                push(value);
                break;
            }
            case 2: {
                cout << "enter the value to be popped" << endl;
                cin >> value;
                pop(value);
                break;
            }
            case 3: {
                display();
                break;
            }
            case 4: {
                cout << "exit" << endl;
                break;
            }
            default: {
                cout << "invalid choice" << endl;
            }
        }
    } while (ch != 4);

    return 0;
}

