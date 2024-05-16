#include <iostream>
using namespace std;

struct node {
    node* right;.
    node* left;
    int info;
};

node* newnode(int info) {
    node* newnode = new node;
    newnode->info = info;
    newnode->left = nullptr;
    newnode->right = nullptr;
    return newnode;
}

int main() {
    int x;
    char choose;
    int y,i;
    cout<<"how many values you want to enter: ";
    cin>>y;
    node* root = newnode(x);

    for(int i=0;i<y;i++){
    cout << "Choose direction (L/R): ";
    cin >> choose;

    switch (choose) {
        case 'L':
            cout << "Enter the value for the left child: ";
            cin >> x;
            root->left = newnode(x);
            break;
        case 'R':
            cout << "Enter the value for the right child: ";
            cin >> x;
            root->right = newnode(x);
            break;
        default:
            cout << "Invalid choice";
            break;
    }
}
    return 0;
}

