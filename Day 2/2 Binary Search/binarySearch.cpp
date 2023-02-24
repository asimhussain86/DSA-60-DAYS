#include<iostream>

using namespace std;
void binarySearch(int array[], int target, int size) {
    int start = 0, end = size - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (array[mid] == target) {
            cout << array[mid] << " is found at index " << mid << endl;
            return;
        } else if (target < array[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
}
int main() {
    int size, target, arr[size];
    cout << "Enter the size of array: ";
    cin >> size;
    cout << "Enter the elements of array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to be searched: ";
    cin >> target;
    binarySearch(arr, target, size);

    return 0;
}