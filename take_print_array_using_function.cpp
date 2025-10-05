#include <iostream>
using namespace std;

void takeArray(int arr[], int size) {
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void printArray(int arr[], int size) {
    cout << "Array elements are: ";
    for (int j = 0; j < size; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int lol[n];

    takeArray(lol, n);
    printArray(lol, n);

    cout << "Everything's fine" << endl;
    return 0;
}
