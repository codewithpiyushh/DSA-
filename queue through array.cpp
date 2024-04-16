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
    int arr[20];
    int ch;
    int n;
int p;
cout<<"enter how many numbers you want to insert: ";
cin>>p;
for(int i = 0;i<p;i++){
    cin>>arr[i];
}
for(int i = 0;i<p;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
    cout << "1.insert" << endl;
    cout << "2.delete" << endl;
    cout << "3.display" << endl;
    cout << "choose the option" << endl;
    cin >> ch;

    switch (ch) {
        case 1: {
            cout << "enter the element to insert" << endl;
            cin >> n;
            insert(n);
            for(int i = 0;i<p;i++){
    cout<<arr[i]<<" "<<endl;
}
            break;
        }
        case 2: {
            del();
            for(int i = 0;i<p;i++){
    cout<<arr[i]<<" "<<endl;
}
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


