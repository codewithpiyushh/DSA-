 #include <iostream>
using namespace std;

struct node {
    int info;
    node* next;
};

node* start = nullptr;

void push(int value) {
    node* nn = new node;
    nn->info = value;
    nn->next = start;
    start = nn;
}

void pop() {
    if (start == nullptr) {
        cout << "Stack is underflow" << endl;
        return;
    }
    node* temp = start;
    start = start->next;
    free(temp);
}

int main() {
    int ch;
    int n;

    cout << "push" << endl;
    cout << "pop" << endl;
    cout << "choose the option \n1. push \n2. pop" << endl;
    cin >> ch;

    switch (ch) {
        case 1: {
            cout << "enter the element to push" << endl;
            cin >> n;
            push(n);
            break;
        }
        case 2: {
            pop();
            break;
        }
        default:
            cout << "invalid choice";
    }

    return 0;
}

