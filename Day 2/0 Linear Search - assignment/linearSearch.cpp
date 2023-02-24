#include <iostream>

using namespace std;

void linearSearch(int array[], int key) {
    for (int i = 0; i < 6; i++) {
        if (array[i] == key) {
            cout << "found at index " << i << endl;
        }

    }

}
int main() {
    int arr[6];
    int key;
    cout << "Enter 6 numbers of array: ";
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }
    cout << "Enter the key to be searched: ";
    cin >> key;
    linearSearch(arr, key);

    return 0;
}