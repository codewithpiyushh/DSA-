#include<iostream>
using namespace std;

struct node {
    int info;
    node* next;
};

node* f = nullptr;
node* e = nullptr;

void insert(int value) {
    node* nn = new node;
    nn->info = value;
    nn->next = nullptr;
    if (e == nullptr) {
        e = f = nn;
    }
    else {
        while (e->next != nullptr) {
            e = e->next;
        }
        e->next = nn;
    }
}

void del() {
    if (f == nullptr) {
        cout << "Queue empty" << endl;
        return;
    }
    node* temp = f;
    f = f->next;
    delete temp;
}

void display() {
    node* temp1 = f;
    cout << "Front";
    if (f == nullptr) {
        cout << "Queue empty";
    }
    else {
        while (temp1 != nullptr) {
            cout << temp1->info << "->";
            temp1 = temp1->next;
        }
        cout << "END";
        cout << "start value" << f->info << endl;
    }
}

int main() {
    int x, choice;
    char ch;
    do {
        cout << "QUEUE" << endl;
        cout << "1. INSERTION" << endl;
        cout << "2. DELETION" << endl;
        cout << "3. EXIT" << endl;
        cout << "Enter your choice:" << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                do {
                    cout << "Enter value: ";
                    cin >> x;
                    insert(x);
                    cout << "Do you want to insert more? (Y/N): ";
                    cin >> ch;
                } while (toupper(ch) == 'Y');
                display();
                break;
            case 2:
                del();
                display();
                break;
            case 3:
                exit(0);
                break;
            default:
                cout << "Wrong choice" << endl;
                break;
        }
    } while (true);

    return 0;
}
